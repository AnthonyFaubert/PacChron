
// a pacman icon set is 3 x 9x9 = 243 bits and has 3 mouth openings
// we store 4 of these icons, facing in 4 directions.
//
// address pacman_bits with a direction 0..3, a mouth opening 0..2, 
// an x coordinate 0..8, and a y coordinate 0..8 like this
// BVGet(&pacman_bits[dir],x+y*9+81*mouth);

unsigned char pacman_bits[4][(3*9*9+7)/8] = {
  // facing right
  {255, 33, 64,128,  0,  1,  2,  4,  8, 16,254, 67,128,  0,  1,  2,  4,  8, 16, 40,252,135,  0,  1,  2,  4,  8, 16, 32, 80,  1,},
  // faciing up
  {  1,  2,  4,  8,240, 63, 64,128,  0,  1,  2,  4,  8, 16,224,127,128,128,  1,  2,  4,  8, 16, 48,192,255,  0,  1,  3,  4,  0,},
  // facing left
  { 16, 32, 64,128,  0,  1,  2,  4,  8,255,161, 64,128,  0,  1,  2,  4,  8, 16,254, 83,129,  0,  1,  2,  4,  8, 16, 32,252,  7,},
  // facing down
  {  0,  1,  2,  4,248, 31, 32, 64,128,  0,  1,  2, 12,  8,240, 63, 64,128,  0,  1,  2,  4, 24, 16,224,127,128,  1,  1,  2,  4,},
};
