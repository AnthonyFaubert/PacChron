
#include "pacman.h"

extern void toggleScreenPixel(unsigned char, unsigned char);
extern void _delay_ms(unsigned short);

#include "pm-bitmaps.h"

static pacman_state pm_state;

// return the value of the Nth bit in a bit vector
// example BVGet(&pacman_bits[dir],x+y*9+81*mouth);  
unsigned char BVGet(unsigned char *bv, unsigned char bit_number) {
    return((bv[bit_number >> 3] >> (bit_number & 7)) & 1);
}



void xor_icon(pacman_state *p) {
  unsigned char tlx = p->x;
  unsigned char tly = p->y;
  unsigned char m = p->mouth;
  unsigned char *bv = &pacman_bits[p->dir][0];
  for (unsigned char x = 0; x < 9; x++) {
    for (unsigned char y = 0; y < 9; y++) {
        if (BVGet(bv,x+y*8+m*81)) toggleScreenPixel(tlx+x, tly+y);
    }
  }
}

/*  Erase the pacman at current_position while drawing a new pacman at tlx,tly
 *  but do this one pixel at a time so the pacman is never fully erased.  This should keep the pixels
 *  on most of the time and maybe flicker less than doing the normal full erase/draw cycle.
 */
void smooth_move_icon(pacman_state *p) {
  unsigned char *bv1 = &pacman_bits[p->dir][0];  // new
  unsigned char tlx = p->x;
  unsigned char tly = p->y;
  unsigned char *bv2 = &pacman_bits[pm_state.dir][0];  // old
  unsigned char tlx_old = pm_state.x;
  unsigned char tly_old = pm_state.y;
  for (unsigned char x = 0; x < 9; x++) {
    for (unsigned char y = 0; y < 9; y++) {
      if (BVGet(bv2,x+y*8+      p->mouth*81)) toggleScreenPixel(tlx_old+x, tly_old+y);
      if (BVGet(bv1,x+y*8+pm_state.mouth*81)) toggleScreenPixel(tlx    +x, tly    +y);
    }
  }
  pm_state.x = tlx;
  pm_state.y = tly;
  pm_state.dir = p->dir;
  pm_state.mouth = p->mouth;
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

void test_pacman(void) {
  /* move the pacman around in a small orbit */
  pacman_state s;
  s.x = 10; s.y = 10; s.dir = PACMAN_RIGHT; s.mouth = PACMAN_MOUTH_CLOSED;
  init_pacman(&s);
  while (1) {
    while ( s.x < 100 ) pacman_gobble(&s, 1, 0);
    s.dir = PACMAN_DOWN;
    while ( s.y <  45 ) pacman_gobble(&s, 0, 1);
    s.dir = PACMAN_LEFT;
    while ( s.x >= 10 ) pacman_gobble(&s,-1, 0);
    s.dir = PACMAN_UP;
    while ( s.y >= 10 ) pacman_gobble(&s, 0,-1);
    s.dir = PACMAN_RIGHT;
  }
}
