
#define PACMAN_RIGHT  0
#define PACMAN_UP     1
#define PACMAN_LEFT   2
#define PACMAN_DOWN   3
#define PACMAN_MOUTH_CLOSED  0
#define PACMAN_MOUTH_OPEN_1  1
#define PACMAN_MOUTH_OPEN_2  2


typedef struct {
  unsigned char x,y,dir,mouth;
} pacman_state;

extern void init_pacman(pacman_state*);
extern void change_pacman(pacman_state*);
extern void pacman_gobble(pacman_state *, char, char);
extern void pacman_gobble2(pacman_state *);
