
// a pacman icon set is 3 x 9x9 = 243 bits and has 3 mouth openings
// we store 4 of these icons, facing in 4 directions.
//
// address pacman_bits with a direction 0..3, a mouth opening 0..2, 
// an x coordinate 0..8, and a y coordinate 0..8 like this
// BVGet(&pacman_bits[dir],x+y*9+81*mouth);

unsigned char pacman_bits[4][(3*9*9+7)/8] = {
  // facing right
  {255,1,0,0,0,0,0,0,0,0,254,3,0,0,0,0,0,0,0,0,252,7,0,0,0,0,0,0,0,0,0,},
  // faciing up
  {1,2,4,8,16,32,64,128,0,1,2,4,8,16,32,64,128,0,1,2,4,8,16,32,64,128,0,1,2,4,0,},
  // facing left
  {0,0,0,0,0,0,0,0,0,255,1,0,0,0,0,0,0,0,0,254,3,0,0,0,0,0,0,0,0,252,7,},
  // facing down
  {0,1,2,4,8,16,32,64,128,0,1,2,4,8,16,32,64,128,0,1,2,4,8,16,32,64,128,0,1,2,4,},
};
