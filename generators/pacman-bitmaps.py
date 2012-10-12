#!/usr/bin/python3

import pdb

pacman = (
  "   XXX   " +
  "  XXX X  " +
  " XXXXXXX " +
  "XXXXXXXXX" +
  "XXXXX    " +
  "XXXXXXXXX" +
  " XXXXXXX " +
  "  XXXXX  " +
  "   XXX   ",

  "   XXX   " +
  "  XXX X  " +
  " XXXXXXX " +
  "XXXXXX   " +
  "XXXXX    " +
  "XXXXXX   " +
  " XXXXXXX " +
  "  XXXXX  " +
  "   XXX   ",

  "   XXX   " +
  "  XXX X  " +
  " XXXXX   " +
  "XXXX     " +
  "XXX      " +
  "XXXX     " +
  " XXXXX   " +
  "  XXXXX  " +
  "   XXX   ",
)

pacman = (
  "XXXXXXXXX" +
  "    X    " +
  "    X    " +
  "    X    " +
  "    X    " +
  "    X    " +
  "    X    " +
  "    X    " +
  "    X    ",

  "XXXXXXXXX" +
  "    X    " +
  "    X    " +
  "    X    " +
  "    X    " +
  "    X    " +
  "    X    " +
  "    X    " +
  "  X X    ",

  "XXXXXXXXX" +
  "    X    " +
  "    X    " +
  "    X    " +
  "    X    " +
  "    X    " +
  "    X    " +
  "    X    " +
  "  X X X  ",
  )

c_comment = """
// a pacman icon set is 3 x 9x9 = 243 bits and has 3 mouth openings
// we store 4 of these icons, facing in 4 directions.
//
// address pacman_bits with a direction 0..3, a mouth opening 0..2, 
// an x coordinate 0..8, and a y coordinate 0..8 like this
// BVGet(&pacman_bits[dir],x+y*9+81*mouth);
"""
xx="""
unsigned char pacman_bits[4][(3*9*9+7)/8] = {
  // facing right
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
};
"""
pacman_bits = [
  [],
  [],
  [],
  [],
]

def output_C_code():
  print(c_comment)
  cc = ("facing right","faciing up","facing left","facing down")
  print("unsigned char pacman_bits[4][(3*9*9+7)/8] = {");
  for dir in range(4):
    str = "  {"
    for b in pacman_bits[dir]:
      str +="%3d," % b
    str += "},"
    print("  // " + cc[dir])
    print(str)
  print("};")

def show_pictures():
  for dir in range(4):
    for m in range(3):
      # print(pacman[m])
      for y in range(9):
        s = ""
        for x in range(9):
          bn = x+y*9+m*81
          if pacman_bits[dir][bn >> 3] & (1 << (bn & 7)) != 0:
            s +='X'
          else:
            s += ' '
        print(s)
      if m < 2:
        print('---------')
    if dir < 3:
      print('=========')

def fill_pacman_bits():
  """Convert 3 strings of 81 X and spaces into an array of 31 byte values.
     3*9*9 = 243 which is less than 256 so indexable by an 8-bit register
     which is more efficient on the AVR processor.
  """
  byteValues = [0]*int((3*9*9+7)>>3)
  for m in range(3):
    for y in range(9):
      for x in range(9):
        bit = pacman[m][x+y*9] != ' '
        if bit:
          bn = x+y*9+m*81
          byteValues[bn >> 3] |= (1 << (bn & 7))
  return(byteValues)

def rotate_ccw_90(bitsIn):
  "rotate a bitmap 90 degrees counter clockwise"
  byteValues = [0]*31
  for m in range(3):
    for y in range(9):
      for x in range(9):
        bn = x+y*9+81*m
        bit = (bitsIn[bn >> 3] >> (bn & 7)) & 1
        bn = y+(8-x)*9+81*m
        byteValues[bn >> 3] |= (bit << (bn & 7))
  return(byteValues)


def main():
  # make the bytes for 3 mouth openings
  pacman_bits[0] = fill_pacman_bits()
  # make the other 3 rotated bitmaps from the first one, total of 4 sets
  for i in range(3):
    pacman_bits[i+1] = rotate_ccw_90(pacman_bits[i])
  output_C_code()
  #show_pictures()

main()
