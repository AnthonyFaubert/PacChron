
#include "avr_types.h"
#include "pacman.h"
#include "pm-bitmaps.h"

extern void toggleScreenPixel(unsigned char, unsigned char);
extern void _delay_ms(unsigned short);



/* This is the pacman's state as currently drawn.  To move him, erase him here before drawing him again.
 */
static pacman_state pm_state;



/* BVGet(bitVector, bitNumber)
 * return the value of the Nth bit from a bit vector in prog_mem
 * example BVGet(&pacman_bits[dir][0],x+y*9+81*mouth);  
 */
unsigned char BVGet(prog_uchar *bv, unsigned char bit_number) {
    unsigned char byte = (__extension__( {uint16_t __addr16 = (uint16_t) ((uint16_t)(&bv[bit_number >> 3])); uint8_t __result;
                                          __asm__("lpm %0, Z" "\n\t": "=r"(__result):"z"(__addr16));  __result; } )
	);
    return((byte >> (bit_number & 7)) & 1);
}



void xor_icon(pacman_state *p) {
  unsigned char tlx = p->x;
  unsigned char tly = p->y;
  //unsigned char m = p->mouth;
  unsigned char n = p->mouth * 81;
  prog_uchar *bv = &pacman_bits[p->dir][0];
  for (unsigned char y = 0; y < 9; y++) {
    for (unsigned char x = 0; x < 9; x++) {
        // if (BVGet(bv,x+y*8+m*81)) toggleScreenPixel(tlx+x, tly+y);
        if (BVGet(bv,n++)) toggleScreenPixel(tlx+x, tly+y);
    }
  }
}

/*  Erase the pacman at current_position while drawing a new pacman at tlx,tly
 *  but do this one pixel at a time so the pacman is never fully erased.  This should keep the pixels
 *  on most of the time and maybe flicker less than doing the normal full erase/draw cycle.
 */
void smooth_move_icon(pacman_state *p) {

  prog_uchar *bv0 = &pacman_bits[pm_state.dir][0];  // old
  unsigned char x0 = pm_state.x;
  unsigned char y0 = pm_state.y;
  unsigned char n0 = pm_state.mouth * 81;
  pm_state.dir = p->dir;
  prog_uchar *bv1 = &pacman_bits[p->dir][0];        // new
  unsigned char x1 = pm_state.x = p->x;
  unsigned char y1 = pm_state.y = p->y;
  pm_state.mouth = p->mouth;
  unsigned char n1 = p->mouth * 81;

  unsigned char x, y;

  for (y = 0; y < 9; y++) {
    for (x = 0; x < 9; x++) {
      if (BVGet(bv0, n0++)) toggleScreenPixel(x0+x, y0+y);
      if (BVGet(bv1, n1++)) toggleScreenPixel(x1+x, y1+y);
    }
  }
}

/* draw pacman somewhere without erasing him first */
void init_pacman(pacman_state *p) {
  pm_state.x     = p->x;
  pm_state.y     = p->y;
  pm_state.dir   = p->dir;
  pm_state.mouth = p->mouth;
  xor_icon(p);
}

/* erase pacman at his current location, then redraw pacman at the specified new location */
void change_pacman(pacman_state *p) {
  // erase pacman at its current location
  xor_icon(&pm_state);
  // draw a new pacman at the provided location
  init_pacman(p);
  //smooth_move_icon(p);
}

/* open and close pacman's mouth 
 * while advancing him dx,dy with each step.  Moves him a total of 4*dx,4*dy
 */
void pacman_gobble(pacman_state *p, char dx, char dy) {
  unsigned char sequence[4] = 
    {PACMAN_MOUTH_OPEN_1, PACMAN_MOUTH_OPEN_2, PACMAN_MOUTH_OPEN_1, PACMAN_MOUTH_CLOSED};
  unsigned char i;
  for ( i = 0; i < 4 ; i++ ) {
    p->mouth = sequence[i];
    p->x += dx;
    p->y += dy;
    smooth_move_icon(p);
    _delay_ms(45);
  }
}

#define XMAX (127-9)
#define YMAX (63-9)
#define XMIN 2
#define YMIN 2

void pacman_gobble2(pacman_state *p) {
  unsigned char sequence[4] = 
    {PACMAN_MOUTH_OPEN_1, PACMAN_MOUTH_OPEN_2, PACMAN_MOUTH_OPEN_1, PACMAN_MOUTH_CLOSED};
  unsigned char i;
  unsigned char dx, dy;
  if ( p->dir  == PACMAN_RIGHT ) {
      dx = 1; dy = 0;
  } else if ( p->dir  == PACMAN_LEFT ) {
      dx = 0xff; dy = 0;
  } else if ( p->dir  == PACMAN_UP ) {
      dx = 0; dy = 0xff;
  } else {
      dx = 0; dy = 1;
  }
  for ( i = 0; i < 4 ; i++ ) {
    p->mouth = sequence[i];
    p->x += dx;
    p->y += dy;
    if (p->x > XMAX) p->x = XMAX;  if (p->x < (unsigned char) XMIN) p->x = XMIN;
    if (p->y > YMAX) p->y = YMAX;  if (p->y < (unsigned char) YMIN) p->y = YMIN;
    smooth_move_icon(p);
    _delay_ms(45);
  }
}

