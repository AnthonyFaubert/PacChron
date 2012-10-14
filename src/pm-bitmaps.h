
// a pacman icon set is 3 x 9x9 = 243 bits and has 3 mouth openings
// we store 4 of these icons, facing in 4 directions.
//
// address pacman_bits with a direction 0..3, a mouth opening 0..2, 
// an x coordinate 0..8, and a y coordinate 0..8 like this
// BVGet(&pacman_bits[dir],x+y*9+81*mouth);

prog_uchar pacman_bits[4][(3*9*9+7)/8] = {
  // facing right
  { 56,184,248,251,255,225,191, 63, 62, 56,112,112,241,247,227,195, 15,127,124,112,224,224,226,227,193,129,  7, 62,248,224,  0,},
  // faciing up
  { 40,216,184,107,255,255,191, 63, 62, 56,  0, 16, 49,214,254,255,127,127,124,112,  0,  0, 32,168,248,241,247,254,248,224,  0,},
  // facing left
  { 56,232,248,251, 15,255,191, 63, 62, 56,112,208,241,135, 31, 62,126,127,124,112,224,160,131, 15, 60,112,240,248,248,224,  0,},
  // facing down
  { 56,248,248,251,255,191,189, 59, 54, 40,112,240,241,247,255,127,123, 99, 68,  0,224,224,227,239,253,241,226,130,  0,  0,  0,},
};
