typedef enum {
 I2C_IDLE = 0, I2C_BUSY = 1,
 I2C_MASTER_TX = 2, I2C_MASTER_RX = 3,
 I2C_SLAVE_TX = 4, I2C_SLAVE_RX = 5
} eI2cStateType;

typedef char prog_char __attribute__((__progmem__));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int8_t __attribute__((__mode__(__QI__)));
typedef int (*__compar_fn_t)(const void *, const void *);
typedef int ptrdiff_t;
typedef int wchar_t;
typedef int int64_t __attribute__((__mode__(__DI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned long u32;
typedef unsigned int size_t;
typedef unsigned short u16;
typedef unsigned char u08;
typedef unsigned int uint64_t __attribute__((__mode__(__DI__)));
typedef unsigned long long u64;
typedef unsigned int uint32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int uint8_t __attribute__((__mode__(__QI__)));
typedef unsigned int uint16 __attribute__ ((__mode__ (__HI__)));
typedef unsigned char prog_uchar __attribute__((__progmem__));
typedef signed long s32;
typedef signed long long s64;
typedef signed char s08;
typedef signed short s16;


typedef int32_t prog_int32_t __attribute__((__progmem__));
typedef int8_t int_fast8_t;
typedef uint32_t uint_least32_t;
typedef int16_t prog_int16_t __attribute__((__progmem__));
typedef int32_t int_fast32_t;
typedef uint16 uintptr_t;
typedef int16_t int_least16_t;
typedef uint64_t uint_least64_t;
typedef uint32_t uint_farptr_t;
typedef uint16 uint_least16_t;
typedef int8_t prog_int8_t __attribute__((__progmem__));
typedef uint8_t prog_uint8_t __attribute__((__progmem__));
typedef uint16 uint_fast16_t;
typedef uint32_t prog_uint32_t __attribute__((__progmem__));
typedef int64_t intmax_t;
typedef int64_t prog_int64_t __attribute__((__progmem__));
typedef uint8_t uint_fast8_t;
typedef int64_t int_fast64_t;
typedef uint64_t uintmax_t;
typedef int16_t intptr_t;
typedef int64_t int_least64_t;
typedef int16_t int_fast16_t;
typedef int32_t int_farptr_t;
typedef uint64_t uint_fast64_t;
typedef uint8_t uint_least8_t;
typedef int32_t int_least32_t;
typedef uint64_t prog_uint64_t __attribute__((__progmem__));
typedef uint16 prog_uint16 __attribute__((__progmem__));
typedef uint32_t uint_fast32_t;
typedef int8_t int_least8_t;

typedef struct {
 int quot;
 int rem;
} div_t;
typedef struct {
 long quot;
 long rem;
} ldiv_t;
typedef struct
{
    unsigned char low;
    unsigned char high;
    unsigned char extended;
} __fuse_t;

extern void beep(uint16 freq, uint16 duration);
extern void glcdSetXAddress(u08 xAddr);
extern uint32_t __eerd_dword_m328p (const uint32_t *__p) __attribute__((__pure__));
extern size_t strspn_P(const char *__s, const prog_char * __accept) __attribute__((__pure__));
extern char *strchr(const char *, int) __attribute__((__pure__));
extern void __eewr_block_m328p (const void *__src, void *__dst, size_t __n);
extern void glcdStartLine(u08 start);
extern char *strtok_rP(char *__s, const prog_char * __delim, char **__last);
extern volatile uint8_t region;
extern void i2cSetSlaveTransmitHandler(u08 (*i2cSlaveTx_func)(u08 transmitDataLengthMax, u08* transmitData));
extern const prog_char * strchr_P(const prog_char *, int __val) __attribute__((__const__));
extern void *memcpy(void *, const void *, size_t);
extern int strncasecmp_PF (const char *s1, uint_farptr_t s2, size_t n) __attribute__((__pure__));
extern char *strcat_P(char *, const prog_char *);
extern void __eerd_block_m328p (void *__dst, const void *__src, size_t __n);
extern char *strdup(const char *s1);
extern void delay_s(uint8_t s);
extern ldiv_t ldiv(long __num, long __denom) __asm__("__divmodsi4") __attribute__((__const__));
extern size_t strlen_PF (uint_farptr_t src) __attribute__((__const__));
extern uint8_t leapyear(uint16 y);
extern long random_r(unsigned long *__ctx);
extern void glcdFillCircle(u08 xcenter, u08 ycenter, u08 radius, u08 color);
extern div_t div(int __num, int __denom) __asm__("__divmodhi4") __attribute__((__const__));
extern long atol(const char *__s) __attribute__((__pure__));
extern void glcdInit(void);
extern void glcdDataWrite(u08 data);
extern char *strtok_P(char *__s, const prog_char * __delim);
extern void srand(unsigned int __seed);
extern int memcmp(const void *, const void *, size_t) __attribute__((__pure__));
extern int strncasecmp(const char *, const char *, size_t) __attribute__((__pure__));
extern void drawvseg(uint8_t x, uint8_t y, uint8_t inverted);
extern void glcdSetDot(u08 x, u08 y);
extern void glcdDelay(u16 p);
extern int uart_putchar(char c);
extern u08 glcdControlRead(u08 controller);
extern int strncmp_P(const char *, const prog_char *, size_t) __attribute__((__pure__));
extern void delay_10us(uint8_t us);
extern void initbuttons(void);
extern uint8_t i2bcd(uint8_t x);
extern volatile uint8_t time_format;
extern char *strpbrk(const char *__s, const char *__accept) __attribute__((__pure__));
extern void glcdLine(u08 x1, u08 y1, u08 x2, u08 y2);
extern char *__malloc_heap_start;
extern void *memmove(void *, const void *, size_t);
extern void uart_init(uint16 BRR);
extern void __eeupd_word_m328p (uint16 *__p, uint16 __value);
extern size_t strlen_P(const prog_char *) __attribute__((__const__));
extern char *strncpy_PF (char *dest, uint_farptr_t src, size_t len);
extern void glcdFillRectangle(u08 x, u08 y, u08 a, u08 b, u08 color);
extern void *memmem(const void *, size_t, const void *, size_t) __attribute__((__pure__));
extern char *strchrnul(const char *, int) __attribute__((__pure__));
extern char *strcasestr(const char *, const char *) __attribute__((__pure__));
extern void uart_putw_hex(uint16 w);
extern void delay_ms(unsigned char ms);
extern void i2cSendStop(void);
extern size_t strlcpy(char *, const char *, size_t);
extern void i2cSetLocalDeviceAddr(u08 deviceAddr, u08 genCallEn);
extern char *strcasestr_P(const char *, const prog_char *) __attribute__((__pure__));
extern void *memccpy(void *, const void *, int, size_t);
extern void uart_putdw_hex(uint32_t dw);
extern char *strncat_PF (char *dest, uint_farptr_t src, size_t len);
extern void uart_puts(const char* str);
extern int ffs (int __val) __attribute__((__const__));
extern char *itoa(int __val, char *__s, int __radix);
extern void abort(void) __attribute__((__noreturn__));
extern char *strncpy_P(char *, const prog_char *, size_t);
extern void __eewr_float_m328p (float *__p, float __value);
extern void ROM_putstring(const char *str, uint8_t nl);
extern void uart_putw_dec(uint16 w);
extern char *__malloc_heap_end;
extern uint16 __eerd_word_m328p (const uint16 *__p) __attribute__((__pure__));
extern char *strsep(char **, const char *);
extern char *ultoa(unsigned long int __val, char *__s, int __radix);
extern void RAM_putstring(char *str);
extern eI2cStateType i2cGetState(void);
extern int strcmp_P(const char *, const prog_char *) __attribute__((__pure__));
extern void __eewr_dword_m328p (uint32_t *__p, uint32_t __value);
extern u08 glcdDataRead(void);
extern int ffsll (long long __val) __attribute__((__const__));
extern u08 i2cGetStatus(void);
extern const prog_char * strchrnul_P(const prog_char *, int __val) __attribute__((__const__));
extern void *memset(void *, int, size_t);
extern int strcmp_PF (const char *s1, uint_farptr_t s2) __attribute__((__pure__));
extern u08 i2cGetReceivedByte(void);
extern void __eewr_word_m328p (uint16 *__p, uint16 __value);
extern float __eerd_float_m328p (const float *__p) __attribute__((__pure__));
extern void glcdGotoChar(u08 line, u08 col);
extern void i2cMasterReceive(u08 deviceAddr, u08 length, u08* data);
extern char *strncat(char *, const char *, size_t);
extern void glcdBusyWait(u08 controller);
extern const prog_char * strrchr_P(const prog_char *, int __val) __attribute__((__const__));
extern void uart_putc_hex(uint8_t b);
extern size_t strnlen_P(const prog_char *, size_t) __attribute__((__const__));
extern void *memrchr(const void *, int, size_t) __attribute__((__pure__));
extern void drawArrow(uint8_t x, uint8_t y, uint8_t l);
extern void __eeupd_byte_m328p (uint8_t *__p, uint8_t __value);
extern size_t strnlen_PF (uint_farptr_t src, size_t len) __attribute__((__const__));
extern void __eeupd_block_m328p (const void *__src, void *__dst, size_t __n);
extern void i2cReceiveByte(u08 ackFlag);
extern void __eewr_byte_m328p (uint8_t *__p, uint8_t __value);
extern void i2cSendByte(u08 data);
extern long strtol(const char *__nptr, char **__endptr, int __base);
extern u08 i2cMasterSendNI(u08 deviceAddr, u08 length, u08* data);
extern size_t strcspn(const char *__s, const char *__reject) __attribute__((__pure__));
extern void glcdWriteChar(unsigned char c, uint8_t inverted);
extern void i2cSendStart(void);
extern void __eeupd_float_m328p (float *__p, float __value);
extern void *malloc(size_t __size) __attribute__((__malloc__));
extern void glcdSetAddress(u08 x, u08 yLine);
extern size_t strlcpy_PF (char *dst, uint_farptr_t src, size_t siz);
extern volatile uint8_t timeoutcounter;
extern volatile uint8_t old_m, old_h;
extern char *strcpy_P(char *, const prog_char *);
extern int strcmp(const char *, const char *) __attribute__((__pure__));
extern char *strpbrk_P(const char *__s, const prog_char * __accept) __attribute__((__pure__));
extern size_t strcspn_P(const char *__s, const prog_char * __reject) __attribute__((__pure__));
extern char *strrchr(const char *, int) __attribute__((__pure__));
extern void setscore(void);
extern void *realloc(void *__ptr, size_t __size) __attribute__((__malloc__));
extern char *strncpy(char *, const char *, size_t);
extern int strncasecmp_P(const char *, const prog_char *, size_t) __attribute__((__pure__));
extern size_t strlen(const char *) __attribute__((__pure__));
extern char *strcat_PF (char *dest, uint_farptr_t src);
extern void glcdControlWrite(u08 controller, u08 data);
extern void initdisplay(uint8_t inverted);
extern size_t strspn(const char *__s, const char *__accept) __attribute__((__pure__));
extern int strncmp(const char *, const char *, size_t) __attribute__((__pure__));
extern void exit(int __status) __attribute__((__noreturn__));
extern unsigned long strtoul(const char *__nptr, char **__endptr, int __base);
extern u08 i2cMasterReceiveNI(u08 deviceAddr, u08 length, u08 *data);
extern void drawsegment(uint8_t s, uint8_t x, uint8_t y, uint8_t inverted);
extern char *strupr(char *);
extern void glcdRectangle(u08 x, u08 y, u08 a, u08 b);
extern void *bsearch(const void *__key, const void *__base, size_t __nmemb, size_t __size, int (*__compar)(const void *, const void *));
extern void printnumber(uint8_t n, uint8_t inverted);
extern void i2cMasterSend(u08 deviceAddr, u08 length, u08 *data);
extern char *strtok(char *, const char *);
extern volatile uint8_t last_buttonstate, just_pressed, pressed;
extern char *utoa(unsigned int __val, char *__s, int __radix);
extern int strncmp_PF (const char *s1, uint_farptr_t s2, size_t n) __attribute__((__pure__));
extern volatile uint8_t date_m, date_d, date_y;
extern void glcdSetYAddress(u08 yAddr);
extern void i2cInit(void);
extern uint8_t __eerd_byte_m328p (const uint8_t *__p) __attribute__((__pure__));
extern char *ltoa(long int __val, char *__s, int __radix);
extern int strcasecmp_P(const char *, const prog_char *) __attribute__((__pure__));
extern void glcdClearDot(u08 x, u08 y);
extern void uart_putdw_dec(uint32_t dw);
extern size_t strnlen(const char *, size_t) __attribute__((__pure__));
extern char *strcat(char *, const char *);
extern char *strtok_r(char *, const char *, char **);
extern char *strsep_P(char **__sp, const prog_char * __delim);
extern void __eeupd_dword_m328p (uint32_t *__p, uint32_t __value);
extern char *strcpy_PF (char *dest, uint_farptr_t src);
extern void init_crand(void);
extern void srandom(unsigned long __seed);
extern volatile uint8_t buttonholdcounter;
extern char *strstr(const char *, const char *) __attribute__((__pure__));
extern void *memcpy_PF (void *dest, uint_farptr_t src, size_t len);
extern int ffsl (long __val) __attribute__((__const__));
extern void tick(void);
extern void glcdInitHW(void);
extern void glcdWriteCharGr(u08 grCharIndex);
extern size_t strlcpy_P (char *, const prog_char *, size_t );
extern void drawdigit(uint8_t d, uint8_t x, uint8_t y, uint8_t inverted);
extern char *strstr_P(const char *, const prog_char *) __attribute__((__pure__));
extern void i2cSetSlaveReceiveHandler(void (*i2cSlaveRx_func)(u08 receiveDataLength, u08* recieveData));
extern void *calloc(size_t __nele, size_t __size) __attribute__((__malloc__));
extern char *strlwr(char *);
extern char *strncat_P(char *, const prog_char *, size_t);
extern int atoi(const char *__s) __attribute__((__pure__));
extern void free(void *__ptr);
extern void *memchr(const void *, int, size_t) __attribute__((__pure__));
extern volatile uint8_t screenmutex;
extern int rand_r(unsigned long *__ctx);
extern char *strstr_PF (const char *s1, uint_farptr_t s2);
extern uint8_t dotw(uint8_t mon, uint8_t day, uint8_t yr);
extern void draw7seg(uint8_t x, uint8_t y, uint8_t segs, uint8_t inverted);
extern char *strcpy(char *, const char *);
extern long labs(long __i) __attribute__((__const__));
extern int rand(void);
extern void draw(uint8_t inverted);
extern size_t __malloc_margin;
extern void drawhseg(uint8_t x, uint8_t y, uint8_t inverted);
extern long random(void);
extern void i2cSetBitrate(u16 bitrateKHz);
extern int memcmp_PF(const void *, uint_farptr_t, size_t) __attribute__((__pure__));
extern float random_angle_rads(void);
extern size_t strlcat(char *, const char *, size_t);
extern int strcasecmp_PF (const char *s1, uint_farptr_t s2) __attribute__((__pure__));
extern char uart_getchar(void);
extern void glcdPutStr(char *data, uint8_t inverted);
extern void glcdCircle(u08 xcenter, u08 ycenter, u08 radius, u08 color);
extern void glcdClearScreen(void);
extern void i2cWaitForComplete(void);
extern size_t strlcat_PF (char *dst, uint_farptr_t src, size_t siz);
extern int strcasecmp(const char *, const char *) __attribute__((__pure__));
extern void glcdHome(void);
extern volatile uint8_t second_changed, minute_changed, hour_changed;
extern size_t strlcat_P (char *, const prog_char *, size_t );
extern int abs(int __i) __attribute__((__const__));
extern char *strrev(char *);

static inline void _delay_loop_1(uint8_t __count) __attribute__((always_inline));
static inline void _delay_loop_2(uint16 __count) __attribute__((always_inline));

#include "pacman.h"

void _delay_loop_1(uint8_t __count) {
  __asm__ volatile ("1: dec %0" "\n\t" "brne 1b":"=r" (__count)
                    :"0"(__count)
    );
}
void _delay_loop_2(uint16 __count) {
  __asm__ volatile ("1: sbiw %0,1" "\n\t" "brne 1b":"=w" (__count):"0"(__count));
}

static inline void delayHalfCountUsec(uint16 count) {  // 16 bit counter, max 65535 x 0.5 usec, maximum 32.787 msec
  __asm__ volatile ("1: sbiw %0,1" "\n\t" 
		    "brne 1b"
		    :"=w" (count):"0"(count));
}

void _delay_ms(uint16 ms) {
    while (ms > 32) {
        delayHalfCountUsec((uint16) 2000*32);
        ms -= 32;
    }
    if (ms > 0) {
        delayHalfCountUsec((uint16) 2000*ms);
    }
}



typedef struct struct_GrLcdCtrlrStateType {
  unsigned char xAddr;
  unsigned char yAddr;
} GrLcdCtrlrStateType;
typedef struct struct_GrLcdStateType {
  unsigned char lcdXAddr;
  unsigned char lcdYAddr;
  GrLcdCtrlrStateType ctrlr[((128 + 64 - 1) / 64)];
} GrLcdStateType;
static unsigned char __attribute__ ((progmem)) Font5x7[] = {
  0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x5F, 0x00, 0x00,
    0x00, 0x07, 0x00, 0x07, 0x00,
    0x14, 0x7F, 0x14, 0x7F, 0x14,
    0x24, 0x2A, 0x7F, 0x2A, 0x12,
    0x23, 0x13, 0x08, 0x64, 0x62,
    0x36, 0x49, 0x55, 0x22, 0x50,
    0x00, 0x05, 0x03, 0x00, 0x00,
    0x00, 0x1C, 0x22, 0x41, 0x00,
    0x00, 0x41, 0x22, 0x1C, 0x00,
    0x08, 0x2A, 0x1C, 0x2A, 0x08,
    0x08, 0x08, 0x3E, 0x08, 0x08,
    0x00, 0x50, 0x30, 0x00, 0x00,
    0x08, 0x08, 0x08, 0x08, 0x08,
    0x00, 0x60, 0x60, 0x00, 0x00,
    0x20, 0x10, 0x08, 0x04, 0x02,
    0x3E, 0x51, 0x49, 0x45, 0x3E,
    0x00, 0x42, 0x7F, 0x40, 0x00,
    0x42, 0x61, 0x51, 0x49, 0x46,
    0x21, 0x41, 0x45, 0x4B, 0x31,
    0x18, 0x14, 0x12, 0x7F, 0x10,
    0x27, 0x45, 0x45, 0x45, 0x39,
    0x3C, 0x4A, 0x49, 0x49, 0x30,
    0x01, 0x71, 0x09, 0x05, 0x03,
    0x36, 0x49, 0x49, 0x49, 0x36,
    0x06, 0x49, 0x49, 0x29, 0x1E,
    0x00, 0x36, 0x36, 0x00, 0x00,
    0x00, 0x56, 0x36, 0x00, 0x00,
    0x00, 0x08, 0x14, 0x22, 0x41,
    0x14, 0x14, 0x14, 0x14, 0x14,
    0x41, 0x22, 0x14, 0x08, 0x00,
    0x02, 0x01, 0x51, 0x09, 0x06,
    0x32, 0x49, 0x79, 0x41, 0x3E,
    0x7E, 0x11, 0x11, 0x11, 0x7E,
    0x7F, 0x49, 0x49, 0x49, 0x36,
    0x3E, 0x41, 0x41, 0x41, 0x22,
    0x7F, 0x41, 0x41, 0x22, 0x1C,
    0x7F, 0x49, 0x49, 0x49, 0x41,
    0x7F, 0x09, 0x09, 0x01, 0x01,
    0x3E, 0x41, 0x41, 0x51, 0x32,
    0x7F, 0x08, 0x08, 0x08, 0x7F,
    0x00, 0x41, 0x7F, 0x41, 0x00,
    0x20, 0x40, 0x41, 0x3F, 0x01,
    0x7F, 0x08, 0x14, 0x22, 0x41,
    0x7F, 0x40, 0x40, 0x40, 0x40,
    0x7F, 0x02, 0x04, 0x02, 0x7F,
    0x7F, 0x04, 0x08, 0x10, 0x7F,
    0x3E, 0x41, 0x41, 0x41, 0x3E,
    0x7F, 0x09, 0x09, 0x09, 0x06,
    0x3E, 0x41, 0x51, 0x21, 0x5E,
    0x7F, 0x09, 0x19, 0x29, 0x46,
    0x46, 0x49, 0x49, 0x49, 0x31,
    0x01, 0x01, 0x7F, 0x01, 0x01,
    0x3F, 0x40, 0x40, 0x40, 0x3F,
    0x1F, 0x20, 0x40, 0x20, 0x1F,
    0x7F, 0x20, 0x18, 0x20, 0x7F,
    0x63, 0x14, 0x08, 0x14, 0x63,
    0x03, 0x04, 0x78, 0x04, 0x03,
    0x61, 0x51, 0x49, 0x45, 0x43,
    0x00, 0x00, 0x7F, 0x41, 0x41,
    0x02, 0x04, 0x08, 0x10, 0x20,
    0x41, 0x41, 0x7F, 0x00, 0x00,
    0x04, 0x02, 0x01, 0x02, 0x04,
    0x40, 0x40, 0x40, 0x40, 0x40,
    0x00, 0x01, 0x02, 0x04, 0x00,
    0x20, 0x54, 0x54, 0x54, 0x78,
    0x7F, 0x48, 0x44, 0x44, 0x38, 0x38, 0x44, 0x44, 0x44, 0x20,
    // 0x38, 0x44, 0x44, 0x48, 0x7F,
    0x38, 0x44, 0x54, 0x48, 0x7F,       // put a dot inside the letter "d"
    /*
       .....
       .xxxx
       x...x
       x.x.x
       x..xx
       .xx.x
       ....x
       ....x
     */
    0x38, 0x54, 0x54, 0x54, 0x18,
    0x08, 0x7E, 0x09, 0x01, 0x02,
    0x08, 0x14, 0x54, 0x54, 0x3C,
    0x7F, 0x08, 0x04, 0x04, 0x78,
    0x00, 0x44, 0x7D, 0x40, 0x00,
    0x20, 0x40, 0x44, 0x3D, 0x00,
    0x00, 0x7F, 0x10, 0x28, 0x44,
    0x00, 0x41, 0x7F, 0x40, 0x00,
    0x7C, 0x04, 0x18, 0x04, 0x78, 0x7C, 0x08, 0x04, 0x04, 0x78,
    // 0x38, 0x44, 0x44, 0x44, 0x38,
    0x38, 0x44, 0x54, 0x44, 0x38,       // put a dot inside the letter "o"
    /*
       .....
       .xxx.
       x...x
       x.x.x
       x...x
       .xxx.
       .....
       .....
     */
0x7C, 0x14, 0x14, 0x14, 0x08,
    0x08, 0x14, 0x14, 0x18, 0x7C,
    0x7C, 0x08, 0x04, 0x04, 0x08,
    0x48, 0x54, 0x54, 0x54, 0x20,
    0x04, 0x3F, 0x44, 0x40, 0x20,
    0x3C, 0x40, 0x40, 0x20, 0x7C,
    0x1C, 0x20, 0x40, 0x20, 0x1C,
    0x3C, 0x40, 0x30, 0x40, 0x3C,
    0x44, 0x28, 0x10, 0x28, 0x44,
    0x0C, 0x50, 0x50, 0x50, 0x3C,
    0x44, 0x64, 0x54, 0x4C, 0x44,
    0x00, 0x08, 0x36, 0x41, 0x00,
    0x00, 0x00, 0x7F, 0x00, 0x00,
    0x00, 0x41, 0x36, 0x08, 0x00,
    0x08, 0x08, 0x2A, 0x1C, 0x08, 0x08, 0x1C, 0x2A, 0x08, 0x08};
const uint8_t alphatable[] __attribute__ ((__progmem__)) = {
0xFA,
    0x3E,
    0x1A,
    0x7A,
    0xDE,
    0x8E,
    0xF6,
    0x2E,
    0x60,
    0x78,
    0xAE,
    0x1C,
    0xAA,
    0x2A,
    0x3A, 0xCE, 0xF3, 0x0A, 0xB6, 0x1E, 0x38, 0x38, 0xB8, 0x6E, 0x76, 0xDA,};
const prog_char *alphatable_p __attribute__ ((__progmem__)) =
  (prog_char *) alphatable;

/* 7 segment display for digits
 *   bits in the byte are mapped to seven-segment locations as follows

     7777
    2    6
    2    6
    2    6
     1111    where bytes are 7654,3210
    3    5
    3    5
    3    5
     4444
*/

const uint8_t numbertable[] __attribute__ ((__progmem__)) = {
  0xFC,
    //  0x7C,
0x60, 0xDA, 0xF2, 0x66, 0xB6, 0xBE, 0xE0, 0xFE, 0xE6,};

const prog_char *numbertable_p __attribute__ ((__progmem__)) =
  (prog_char *) numbertable;
uint8_t redraw_time = 0;
void initdisplay(uint8_t inverted) {
  glcdFillRectangle(0, 0, 128, 64, inverted);
  //  glcdFillRectangle(1, 1, 127, 63, inverted);
}
void drawdisplay(void) {
  uint8_t inverted = 0;
  glcdFillCircle(128 / 2, 64 * 1 / 10, 4, inverted);
  drawdigit(0, 0, 8, !inverted);
}
void draw7seg(uint8_t x, uint8_t y, uint8_t segs, uint8_t inverted) {
  for (uint8_t i = 0; i < 7; i++) {
    if (segs & (1 << (7 - i)))
      drawsegment('a' + i, x, y, inverted);
    else
      drawsegment('a' + i, x, y, !inverted);
  }
}
void drawdigit(uint8_t x, uint8_t y, uint8_t d, uint8_t inverted) {
  if (d < 10) {
    draw7seg(x, y, (__extension__( {
                                  uint16 __addr16 =
                                  (uint16) ((uint16) (numbertable_p + d));
                                  uint8_t __result;
    __asm__("lpm %0, Z" "\n\t": "=r"(__result):"z"(__addr16));
                                  __result;
                                  }
                    )), inverted);
  } else if ((d >= 'a') || (d <= 'z')) {
    draw7seg(x, y, (__extension__( {
                                  uint16 __addr16 =
                                  (uint16) ((uint16)
                                              (alphatable_p + (d - 'a')));
                                  uint8_t __result;
    __asm__("lpm %0, Z" "\n\t": "=r"(__result):"z"(__addr16));
                                  __result;
                                  }
                    )), inverted);
  } else {
    draw7seg(x, y, 0x00, inverted);
  }
}
void drawsegment(uint8_t s, uint8_t x, uint8_t y, uint8_t inverted) {
  switch (s) {
      case 'a':
        drawhseg(x + 6 / 2 + 1, y, inverted);
        break;
      case 'b':
        drawvseg(x + 18 + 2, y + 6 / 2 + 2, inverted);
        break;
      case 'c':
        drawvseg(x + 18 + 2, y + 64 / 2 + 2, inverted);
        break;
      case 'd':
        drawhseg(x + 6 / 2 + 1, 64 - 6, inverted);
        break;
      case 'e':
        drawvseg(x, y + 64 / 2 + 2, inverted);
        break;
      case 'f':
        drawvseg(x, y + 6 / 2 + 2, inverted);
        break;
      case 'g':
        drawhseg(x + 6 / 2 + 1, (64 - 6) / 2, inverted);
        break;
  }
}
void drawvseg(uint8_t x, uint8_t y, uint8_t inverted) {
  glcdFillRectangle(x, y + 2, 6, 25 - 4, !inverted);
  glcdFillRectangle(x + 1, y + 1, 6 - 2, 1, !inverted);
  glcdFillRectangle(x + 2, y, 6 - 4, 1, !inverted);
  glcdFillRectangle(x + 1, y + 25 - 2, 6 - 2, 1, !inverted);
  glcdFillRectangle(x + 2, y + 25 - 1, 6 - 4, 1, !inverted);
}
void drawhseg(uint8_t x, uint8_t y, uint8_t inverted) {
  glcdFillRectangle(x + 2, y, 18 - 4, 6, !inverted);
  glcdFillRectangle(x + 1, y + 1, 1, 6 - 2, !inverted);
  glcdFillRectangle(x, y + 2, 1, 6 - 4, !inverted);
  glcdFillRectangle(x + 18 - 2, y + 1, 1, 6 - 2, !inverted);
  glcdFillRectangle(x + 18 - 1, y + 2, 1, 6 - 4, !inverted);
}
uint8_t dotw(uint8_t mon, uint8_t day, uint8_t yr) {
  uint16 month, year;
  month = mon;
  year = 2000 + yr;
  if (mon < 3) {
    month += 12;
    year -= 1;
  }
  return (day + (2 * month) + (6 * (month + 1) / 10) + year + (year / 4) -
          (year / 100) + (year / 400) + 1) % 7;
}

volatile uint8_t last_buttonstate = 0, just_pressed = 0, pressed = 0;
volatile uint8_t buttonholdcounter = 0;
void initbuttons(void) {
  (*(volatile uint8_t *) ((0x04) + 0x20)) &= ~(1 << (6));
  (*(volatile uint8_t *) ((0x05) + 0x20)) |= (1 << (6));
  (*(volatile uint8_t *) (0x68)) = (1 << (0));
  (*(volatile uint8_t *) (0x6B)) |= (1 << (6));
  (*(volatile uint8_t *) (0x7C)) = 2;
  (*(volatile uint8_t *) (0x7B)) = 0;
  (*(volatile uint8_t *) (0x7A)) =
    (1 << (7)) | (1 << (3)) | (1 << (2)) | (1 << (1));
  (*(volatile uint8_t *) (0x7A)) |= (1 << (6));
}
uint16 readADC(void) {
  (*(volatile uint8_t *) (0x7A)) &= ~(1 << (3));
  (*(volatile uint8_t *) (0x7A)) |= (1 << (6));
  while (!((*(volatile uint8_t *) (0x7A)) & (1 << (4))));
  return (*(volatile uint16 *) (0x78));
}

void __vector_21(void) __attribute__ ((signal, used, externally_visible));
void __vector_21(void) {
  uint16 reading, reading2;
  __asm__ __volatile__("sei":::"memory");
  reading = (*(volatile uint16 *) (0x78));
  if (reading > 735) {
    pressed = 0;
    last_buttonstate = 0;
    (*(volatile uint8_t *) (0x7A)) |= (1 << (3)) | (1 << (6));
    return;
  } else if (reading > 610) {
    if (!(last_buttonstate & 0x4)) {
      _delay_ms(10);
      reading2 = readADC();
      if ((reading2 > 735) || (reading2 < 610)) {
        (*(volatile uint8_t *) (0x7A)) |= (1 << (3)) | (1 << (6));
        return;
      }
      buttonholdcounter = 2;
      while (buttonholdcounter) {
        reading2 = readADC();
        if ((reading2 > 735) || (reading2 < 610)) {
          last_buttonstate &= ~0x4;
          just_pressed |= 0x4;
          (*(volatile uint8_t *) (0x7A)) |= (1 << (3)) | (1 << (6));
          return;
        }
      }
      last_buttonstate |= 0x4;
      pressed |= 0x4;
    }
  } else if (reading > 270) {
    if (!(last_buttonstate & 0x2)) {
      _delay_ms(10);
      reading2 = readADC();
      if ((reading2 > 610) || (reading2 < 270)) {
        (*(volatile uint8_t *) (0x7A)) |= (1 << (3)) | (1 << (6));
        return;
      }
      just_pressed |= 0x2;
    }
    last_buttonstate |= 0x2;
    pressed |= 0x2;
  } else {
    if (!(last_buttonstate & 0x1)) {
      _delay_ms(10);
      reading2 = readADC();
      if (reading2 > 270) {
        (*(volatile uint8_t *) (0x7A)) |= (1 << (3)) | (1 << (6));
        return;
      }
      just_pressed |= 0x1;
    }
    last_buttonstate |= 0x1;
    pressed |= 0x1;
  }
  (*(volatile uint8_t *) (0x7A)) |= (1 << (3)) | (1 << (6));
}

void __vector_3(void) __attribute__ ((signal, used, externally_visible));
void __vector_3(void) {
  __asm__ __volatile__("sei":::"memory");
}

volatile uint8_t timeoutcounter = 0;
volatile uint8_t screenmutex = 0;




static unsigned char __attribute__ ((progmem)) FontGr[] = {
0x0B, 0x3E, 0x41, 0x41, 0x41, 0x41, 0x42, 0x42, 0x42, 0x42, 0x3C, 0x00,
    0x06, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
void glcdSetDot(u08 x, u08 y) {
  unsigned char temp;
  glcdSetAddress(x, y / 8);
  temp = glcdDataRead();
  temp = glcdDataRead();
  glcdSetAddress(x, y / 8);
  glcdDataWrite(temp | (1 << (y % 8)));
  glcdStartLine(0);
}
void toggleScreenPixel(u08 x, u08 y) {
  unsigned char temp;
  glcdSetAddress(x, y / 8);
  temp = glcdDataRead();
  temp = glcdDataRead();
  glcdSetAddress(x, y / 8);
  glcdDataWrite(temp ^ (1 << (y % 8)) );
  glcdStartLine(0);
}
void glcdClearDot(u08 x, u08 y) {
  unsigned char temp;
  glcdSetAddress(x, y / 8);
  temp = glcdDataRead();
  temp = glcdDataRead();
  glcdSetAddress(x, y / 8);
  glcdDataWrite(temp & ~(1 << (y % 8)));
  glcdStartLine(0);
}
void glcdLine(u08 x1, u08 y1, u08 x2, u08 y2) {
};
void glcdRectangle(u08 x, u08 y, u08 w, u08 h) {
  glcdFillRectangle(x, y, 1, h, 1);
  glcdFillRectangle(x + w - 1, y, 1, h, 1);
  glcdFillRectangle(x, y, w, 1, 1);
  glcdFillRectangle(x, y + h - 1, w, 1, 1);
}
void glcdFillRectangle(u08 x, u08 y, u08 a, u08 b, u08 color) {
  unsigned char i, j, temp;
  signed char k;
  if (y % 8) {
    for (i = 0; i < a; i++) {
      glcdSetAddress(x + i, y / 8);
      temp = glcdDataRead();
      temp = glcdDataRead();
      for (k = (y % 8); k < (y % 8) + b && (k < 8); k++) {
        if (color == 1)
          temp |= (1 << (k));
        else
          temp &= ~(1 << (k));
      }
      glcdSetAddress(x + i, y / 8);
      glcdDataWrite(temp);
    }
    if (b > 8 - (y % 8))
      b -= 8 - (y % 8);
    else
      b = 0;
    y -= (y % 8);
    y += 8;
  }
  for (j = (y / 8); j < (y + b) / 8; j++) {
    glcdSetAddress(x, j);
    for (i = 0; i < a; i++) {
      if (color == 1)
        glcdDataWrite(0xFF);
      else
        glcdDataWrite(0x00);
    }
  }
  b = b % 8;
  if (b) {
    for (i = 0; i < a; i++) {
      glcdSetAddress(x + i, j);
      temp = glcdDataRead();
      temp = glcdDataRead();
      for (k = 0; k < b; k++) {
        if (color == 1)
          temp |= (1 << (k));
        else
          temp &= ~(1 << (k));
      }
      glcdSetAddress(x + i, j);
      glcdDataWrite(temp);
    }
  }
  glcdStartLine(0);
}
void glcdCircle(u08 xcenter, u08 ycenter, u08 radius, u08 color) {
  int tswitch, y, x = 0;
  unsigned char d;
  d = ycenter - xcenter;
  y = radius;
  tswitch = 3 - 2 * radius;
  while (x <= y) {
    if (color == 1) {
      glcdSetDot(xcenter + x, ycenter + y);
      glcdSetDot(xcenter + x, ycenter - y);
      glcdSetDot(xcenter - x, ycenter + y);
      glcdSetDot(xcenter - x, ycenter - y);
      glcdSetDot(ycenter + y - d, ycenter + x);
      glcdSetDot(ycenter + y - d, ycenter - x);
      glcdSetDot(ycenter - y - d, ycenter + x);
      glcdSetDot(ycenter - y - d, ycenter - x);
    } else {
      glcdClearDot(xcenter + x, ycenter + y);
      glcdClearDot(xcenter + x, ycenter - y);
      glcdClearDot(xcenter - x, ycenter + y);
      glcdClearDot(xcenter - x, ycenter - y);
      glcdClearDot(ycenter + y - d, ycenter + x);
      glcdClearDot(ycenter + y - d, ycenter - x);
      glcdClearDot(ycenter - y - d, ycenter + x);
      glcdClearDot(ycenter - y - d, ycenter - x);
    }
    if (tswitch < 0)
      tswitch += (4 * x + 6);
    else {
      tswitch += (4 * (x - y) + 10);
      y--;
    }
    x++;
  }
}
void glcdFillCircle(u08 xcenter, u08 ycenter, u08 radius, u08 color) {
  int tswitch, y, x = 0;
  unsigned char d;
  d = ycenter - xcenter;
  y = radius;
  tswitch = 3 - 2 * radius;
  while (x <= y) {
    glcdFillRectangle(xcenter + x, ycenter - y, 1, y * 2, color);
    glcdFillRectangle(xcenter - x, ycenter - y, 1, y * 2, color);
    glcdFillRectangle(ycenter + y - d, ycenter - x, 1, x * 2, color);
    glcdFillRectangle(ycenter - y - d, ycenter - x, 1, x * 2, color);
    if (tswitch < 0)
      tswitch += (4 * x + 6);
    else {
      tswitch += (4 * (x - y) + 10);
      y--;
    }
    x++;
  }
}
void glcdWriteChar(unsigned char c, uint8_t inverted) {
  u08 i = 0;
  for (i = 0; i < 5; i++) {
    if (inverted) {
      glcdDataWrite(~(__extension__( {
                                    uint16 __addr16 =
                                    (uint16) ((uint16)
                                                (&Font5x7
                                                 [((c - 0x20) * 5) + i]));
                                    uint8_t __result;
      __asm__("lpm %0, Z" "\n\t": "=r"(__result):"z"(__addr16));
                                    __result;
                                    }
                      )));
    } else {
      glcdDataWrite((__extension__( {
                                   uint16 __addr16 =
                                   (uint16) ((uint16)
                                               (&Font5x7
                                                [((c - 0x20) * 5) + i]));
                                   uint8_t __result;
      __asm__("lpm %0, Z" "\n\t": "=r"(__result):"z"(__addr16));
                                   __result;
                                   }
                     )));
    }
  }
  if (inverted)
    glcdDataWrite(0xFF);
  else
    glcdDataWrite(0x00);
  glcdStartLine(0);
}
void glcdWriteCharGr(u08 grCharIdx) {
  u08 idx;
  u08 grLength;
  u08 grStartIdx = 0;
  for (idx = 0; idx < grCharIdx; idx++) {
    grStartIdx += (__extension__( {
                                 uint16 __addr16 =
                                 (uint16) ((uint16)
                                             (FontGr + grStartIdx));
                                 uint8_t __result;
    __asm__("lpm %0, Z" "\n\t": "=r"(__result):"z"(__addr16));
                                 __result;
                                 }
                   )) + 1;
  }
  grLength = (__extension__( {
                            uint16 __addr16 =
                            (uint16) ((uint16) (FontGr + grStartIdx));
                            uint8_t __result;
  __asm__("lpm %0, Z" "\n\t": "=r"(__result):"z"(__addr16));
                            __result;
                            }
              ));
  for (idx = 0; idx < grLength; idx++) {
    glcdDataWrite((__extension__( {
                                 uint16 __addr16 =
                                 (uint16) ((uint16)
                                             (FontGr + (grStartIdx + 1) +
                                              idx));
                                 uint8_t __result;
    __asm__("lpm %0, Z" "\n\t": "=r"(__result):"z"(__addr16));
                                 __result;
                                 }
                   )));
  }
}
void glcdPutStr(char *data, uint8_t inverted) {
  while (*data) {
    glcdWriteChar(*data, inverted);
    data++;
  }
}

static volatile eI2cStateType I2cState;
static u08 I2cDeviceAddrRW;
static u08 I2cSendData[0x20];
static u08 I2cSendDataIndex;
static u08 I2cSendDataLength;
static u08 I2cReceiveData[0x20];
static u08 I2cReceiveDataIndex;
static u08 I2cReceiveDataLength;
static void (*i2cSlaveReceive) (u08 receiveDataLength, u08 * recieveData);
static u08(*i2cSlaveTransmit) (u08 transmitDataLengthMax, u08 * transmitData);
void i2cInit(void) {
  (*(volatile uint8_t *) ((0x08) + 0x20)) |= ((1 << (5)));
  (*(volatile uint8_t *) ((0x08) + 0x20)) |= ((1 << (4)));
  i2cSlaveReceive = 0;
  i2cSlaveTransmit = 0;
  i2cSetBitrate(100);
  (*(volatile uint8_t *) (0xBC)) |= ((1 << (2)));
  I2cState = I2C_IDLE;
  (*(volatile uint8_t *) (0xBC)) |= ((1 << (0)));
  (*(volatile uint8_t *) (0xBC)) |= ((1 << (6)));
  __asm__ __volatile__("sei":::"memory");
}
void i2cSetBitrate(u16 bitrate) {
  u08 bitrate_div;
  bitrate_div = (8000000 / 32) / bitrate;
  (*(volatile uint8_t *) (0xB8)) = 32;
}
void i2cSetLocalDeviceAddr(u08 deviceAddr, u08 genCallEn) {
  (*(volatile uint8_t *) (0xBA)) =
    (((deviceAddr & 0xFE) | (genCallEn ? 1 : 0)));
}
void
i2cSetSlaveReceiveHandler(void (*i2cSlaveRx_func)
                          (u08 receiveDataLength, u08 * recieveData)) {
  i2cSlaveReceive = i2cSlaveRx_func;
}
void
i2cSetSlaveTransmitHandler(u08(*i2cSlaveTx_func)
                           (u08 transmitDataLengthMax, u08 * transmitData)) {
  i2cSlaveTransmit = i2cSlaveTx_func;
}
inline void i2cSendStart(void) {
  (*(volatile uint8_t *) (0xBC)) =
    ((((*(volatile uint8_t *) (0xBC))) & 0x0F) | (1 << (7)) | (1 << (5)));
}
inline void i2cSendStop(void) {
  (*(volatile uint8_t *) (0xBC)) =
    ((((*(volatile uint8_t *) (0xBC))) & 0x0F) | (1 << (7)) | (1 << (6)) |
     (1 << (4)));
}
inline void i2cWaitForComplete(void) {
  while (!(((*(volatile uint8_t *) (0xBC))) & (1 << (7))));
}
inline void i2cSendByte(u08 data) {
  (*(volatile uint8_t *) (0xBB)) = (data);
  (*(volatile uint8_t *) (0xBC)) =
    ((((*(volatile uint8_t *) (0xBC))) & 0x0F) | (1 << (7)));
}
inline void i2cReceiveByte(u08 ackFlag) {
  if (ackFlag) {
    (*(volatile uint8_t *) (0xBC)) =
      ((((*(volatile uint8_t *) (0xBC))) & 0x0F) | (1 << (7)) | (1 << (6)));
  } else {
    (*(volatile uint8_t *) (0xBC)) =
      ((((*(volatile uint8_t *) (0xBC))) & 0x0F) | (1 << (7)));
  }
}
inline u08 i2cGetReceivedByte(void) {
  return (((*(volatile uint8_t *) (0xBB))));
}
inline u08 i2cGetStatus(void) {
  return (((*(volatile uint8_t *) (0xB9))));
}
void i2cMasterSend(u08 deviceAddr, u08 length, u08 * data) {
  u08 i;
  while (I2cState);
  I2cState = I2C_MASTER_TX;
  I2cDeviceAddrRW = (deviceAddr & 0xFE);
  for (i = 0; i < length; i++)
    I2cSendData[i] = *data++;
  I2cSendDataIndex = 0;
  I2cSendDataLength = length;
  i2cSendStart();
}
void i2cMasterReceive(u08 deviceAddr, u08 length, u08 * data) {
  u08 i;
  while (I2cState);
  I2cState = I2C_MASTER_RX;
  I2cDeviceAddrRW = (deviceAddr | 0x01);
  I2cReceiveDataIndex = 0;
  I2cReceiveDataLength = length;
  i2cSendStart();
  while (I2cState);
  for (i = 0; i < length; i++)
    *data++ = I2cReceiveData[i];
}
u08 i2cMasterSendNI(u08 deviceAddr, u08 length, u08 * data) {
  u08 retval = 0x00;
  (*(volatile uint8_t *) (0xBC)) &= ~((1 << (0)));
  i2cSendStart();
  i2cWaitForComplete();
  i2cSendByte(deviceAddr & 0xFE);
  i2cWaitForComplete();
  if (((*(volatile uint8_t *) (0xB9))) == 0x18) {
    while (length) {
      i2cSendByte(*data++);
      i2cWaitForComplete();
      length--;
    }
  } else {
    retval = 0x01;
  }
  i2cSendStop();
  while (!(((*(volatile uint8_t *) (0xBC))) & (1 << (4))));
  (*(volatile uint8_t *) (0xBC)) |= ((1 << (0)));
  return retval;
}
u08 i2cMasterReceiveNI(u08 deviceAddr, u08 length, u08 * data) {
  u08 retval = 0x00;
  (*(volatile uint8_t *) (0xBC)) &= ~((1 << (0)));
  i2cSendStart();
  i2cWaitForComplete();
  i2cSendByte(deviceAddr | 0x01);
  i2cWaitForComplete();
  if (((*(volatile uint8_t *) (0xB9))) == 0x40) {
    while (length > 1) {
      i2cReceiveByte(-1);
      i2cWaitForComplete();
      *data++ = i2cGetReceivedByte();
      length--;
    }
    i2cReceiveByte(0);
    i2cWaitForComplete();
    *data++ = i2cGetReceivedByte();
  } else {
    retval = 0x01;
  }
  i2cSendStop();
  (*(volatile uint8_t *) (0xBC)) |= ((1 << (0)));
  return retval;
}

void __vector_24(void) __attribute__ ((signal, used, externally_visible));
void __vector_24(void) {
  u08 status = ((*(volatile uint8_t *) (0xB9))) & 0xF8;
  switch (status) {
      case 0x08:
      case 0x10:
          ROM_putstring((__extension__( {
                                       static char __c[]
                                       __attribute__ ((__progmem__)) =
                                       ("I2C: M->START\r\n");
                                       &__c[0];
                                       })), 0);
        i2cSendByte(I2cDeviceAddrRW);
        break;
      case 0x18:
      case 0x28:
          ROM_putstring((__extension__( {
                                       static char __c[]
                                       __attribute__ ((__progmem__)) =
                                       ("I2C: MT->SLA_ACK or DATA_ACK\r\n");
                                       &__c[0];
                                       })), 0);
        if (I2cSendDataIndex < I2cSendDataLength) {
          i2cSendByte(I2cSendData[I2cSendDataIndex++]);
        } else {
          i2cSendStop();
          I2cState = I2C_IDLE;
        }
        break;
      case 0x58:
          ROM_putstring((__extension__( {
                                       static char __c[]
                                       __attribute__ ((__progmem__)) =
                                       ("I2C: MR->DATA_NACK\r\n");
                                       &__c[0];
                                       })), 0);
        I2cReceiveData[I2cReceiveDataIndex++] =
          ((*(volatile uint8_t *) (0xBB)));
      case 0x48:
      case 0x20:
      case 0x30:
          ROM_putstring((__extension__( {
                                       static char __c[]
                                       __attribute__ ((__progmem__)) =
                                       ("I2C: MTR->SLA_NACK or MT->DATA_NACK\r\n");
                                       &__c[0];
                                       })), 0);
        i2cSendStop();
        I2cState = I2C_IDLE;
        break;
      case 0x38:
          ROM_putstring((__extension__( {
                                       static char __c[]
                                       __attribute__ ((__progmem__)) =
                                       ("I2C: MT->ARB_LOST\r\n");
                                       &__c[0];
                                       })), 0);
        (*(volatile uint8_t *) (0xBC)) =
          ((((*(volatile uint8_t *) (0xBC))) & 0x0F) | (1 << (7)));
        I2cState = I2C_IDLE;
        break;
      case 0x50:
          ROM_putstring((__extension__( {
                                       static char __c[]
                                       __attribute__ ((__progmem__)) =
                                       ("I2C: MR->DATA_ACK\r\n");
                                       &__c[0];
                                       })), 0);
        uint8_t x = ((*(volatile uint8_t *) (0xBB)));
        I2cReceiveData[I2cReceiveDataIndex++] = x;
        uart_putw_hex(x);
      case 0x40:
          ROM_putstring((__extension__( {
                                       static char __c[]
                                       __attribute__ ((__progmem__)) =
                                       ("I2C: MR->SLA_ACK\r\n");
                                       &__c[0];
                                       })), 0);
        if (I2cReceiveDataIndex < (I2cReceiveDataLength - 1))
          i2cReceiveByte(-1);
        else
          i2cReceiveByte(0);
        break;
      case 0x60:
      case 0x68:
      case 0x70:
      case 0x78:
          ROM_putstring((__extension__( {
                                       static char __c[]
                                       __attribute__ ((__progmem__)) =
                                       ("I2C: SR->SLA_ACK\r\n");
                                       &__c[0];
                                       })), 0);
        I2cState = I2C_SLAVE_RX;
        I2cReceiveDataIndex = 0;
        (*(volatile uint8_t *) (0xBC)) =
          ((((*(volatile uint8_t *) (0xBC))) & 0x0F) | (1 << (7)) |
           (1 << (6)));
        break;
      case 0x80:
      case 0x90:
          ROM_putstring((__extension__( {
                                       static char __c[]
                                       __attribute__ ((__progmem__)) =
                                       ("I2C: SR->DATA_ACK\r\n");
                                       &__c[0];
                                       })), 0);
        I2cReceiveData[I2cReceiveDataIndex++] =
          ((*(volatile uint8_t *) (0xBB)));
        if (I2cReceiveDataIndex < 0x20) {
          i2cReceiveByte(-1);
        } else {
          i2cReceiveByte(0);
        }
        break;
      case 0x88:
      case 0x98:
          ROM_putstring((__extension__( {
                                       static char __c[]
                                       __attribute__ ((__progmem__)) =
                                       ("I2C: SR->DATA_NACK\r\n");
                                       &__c[0];
                                       })), 0);
        i2cReceiveByte(0);
        break;
      case 0xA0:
          ROM_putstring((__extension__( {
                                       static char __c[]
                                       __attribute__ ((__progmem__)) =
                                       ("I2C: SR->SR_STOP\r\n");
                                       &__c[0];
                                       })), 0);
        (*(volatile uint8_t *) (0xBC)) =
          ((((*(volatile uint8_t *) (0xBC))) & 0x0F) | (1 << (7)) |
           (1 << (6)));
        if (i2cSlaveReceive)
          i2cSlaveReceive(I2cReceiveDataIndex, I2cReceiveData);
        I2cState = I2C_IDLE;
        break;
      case 0xA8:
      case 0xB0:
          ROM_putstring((__extension__( {
                                       static char __c[]
                                       __attribute__ ((__progmem__)) =
                                       ("I2C: ST->SLA_ACK\r\n");
                                       &__c[0];
                                       })), 0);
        I2cState = I2C_SLAVE_TX;
        if (i2cSlaveTransmit)
          I2cSendDataLength = i2cSlaveTransmit(0x20, I2cSendData);
        I2cSendDataIndex = 0;
      case 0xB8:
          ROM_putstring((__extension__( {
                                       static char __c[]
                                       __attribute__ ((__progmem__)) =
                                       ("I2C: ST->DATA_ACK\r\n");
                                       &__c[0];
                                       })), 0);
        (*(volatile uint8_t *) (0xBB)) = (I2cSendData[I2cSendDataIndex++]);
        if (I2cSendDataIndex < I2cSendDataLength)
          (*(volatile uint8_t *) (0xBC)) =
            ((((*(volatile uint8_t *) (0xBC))) & 0x0F) | (1 << (7)) |
             (1 << (6)));
        else
          (*(volatile uint8_t *) (0xBC)) =
            ((((*(volatile uint8_t *) (0xBC))) & 0x0F) | (1 << (7)));
        break;
      case 0xC0:
      case 0xC8:
          ROM_putstring((__extension__( {
                                       static char __c[]
                                       __attribute__ ((__progmem__)) =
                                       ("I2C: ST->DATA_NACK or LAST_DATA\r\n");
                                       &__c[0];
                                       })), 0);
        (*(volatile uint8_t *) (0xBC)) =
          ((((*(volatile uint8_t *) (0xBC))) & 0x0F) | (1 << (7)) |
           (1 << (6)));
        I2cState = I2C_IDLE;
        break;
      case 0xF8:
          ROM_putstring((__extension__( {
                                       static char __c[]
                                       __attribute__ ((__progmem__)) =
                                       ("I2C: NO_INFO\r\n");
                                       &__c[0];
                                       })), 0);
        break;
      case 0x00:
          ROM_putstring((__extension__( {
                                       static char __c[]
                                       __attribute__ ((__progmem__)) =
                                       ("I2C: BUS_ERROR\r\n");
                                       &__c[0];
                                       })), 0);
        (*(volatile uint8_t *) (0xBC)) =
          ((((*(volatile uint8_t *) (0xBC))) & 0x0F) | (1 << (7)) | (1 << (4))
           | (1 << (6)));
        I2cState = I2C_IDLE;
        break;
  }
}
eI2cStateType i2cGetState(void) {
  return I2cState;
}

GrLcdStateType GrLcdState;
void glcdInitHW(void) {
  (*(volatile uint8_t *) ((0x05) + 0x20)) &= ~((1 << (7)));
  (*(volatile uint8_t *) ((0x05) + 0x20)) &= ~((1 << (5)));
  (*(volatile uint8_t *) ((0x05) + 0x20)) &= ~((1 << (4)));
  (*(volatile uint8_t *) ((0x08) + 0x20)) &= ~((1 << (0)));
  (*(volatile uint8_t *) ((0x0B) + 0x20)) &= ~((1 << (2)));
  (*(volatile uint8_t *) ((0x04) + 0x20)) |= ((1 << (7)));
  (*(volatile uint8_t *) ((0x04) + 0x20)) |= ((1 << (5)));
  (*(volatile uint8_t *) ((0x04) + 0x20)) |= ((1 << (4)));
  (*(volatile uint8_t *) ((0x07) + 0x20)) |= ((1 << (0)));
  (*(volatile uint8_t *) ((0x0A) + 0x20)) |= ((1 << (2)));
  (*(volatile uint8_t *) ((0x0B) + 0x20)) &= ~(0xF0);
  (*(volatile uint8_t *) ((0x05) + 0x20)) &= ~(0x0F);
  (*(volatile uint8_t *) ((0x0A) + 0x20)) |= 0xF0;
  (*(volatile uint8_t *) ((0x04) + 0x20)) |= 0x0F;
}
void glcdControllerSelect(u08 controller) {
  (*(volatile uint8_t *) ((0x08) + 0x20)) &= ~((1 << (0)));
  (*(volatile uint8_t *) ((0x0B) + 0x20)) &= ~((1 << (2)));
  switch (controller) {
      case 0:
        (*(volatile uint8_t *) ((0x08) + 0x20)) |= ((1 << (0)));
        break;
      case 1:
        (*(volatile uint8_t *) ((0x0B) + 0x20)) |= ((1 << (2)));
        break;
      default:
        break;
  }
}
void glcdBusyWait(u08 controller) {
  __asm__ __volatile__("cli":::"memory");
  glcdControllerSelect(controller);
  (*(volatile uint8_t *) ((0x0B) + 0x20)) |= 0xF0;
  (*(volatile uint8_t *) ((0x05) + 0x20)) |= 0x0F;
  (*(volatile uint8_t *) ((0x05) + 0x20)) &= ~((1 << (7)));
  (*(volatile uint8_t *) ((0x0A) + 0x20)) &= ~(0xF0);
  (*(volatile uint8_t *) ((0x04) + 0x20)) &= ~(0x0F);
  (*(volatile uint8_t *) ((0x05) + 0x20)) |= ((1 << (5)));
  (*(volatile uint8_t *) ((0x05) + 0x20)) |= ((1 << (4)));
  asm volatile ("nop");
  asm volatile ("nop");
  while ((((*(volatile uint8_t *) ((0x09) + 0x20)) & 0xF0) |
          ((*(volatile uint8_t *) ((0x03) + 0x20)) & 0x0F)) & 0x80) {
    (*(volatile uint8_t *) ((0x05) + 0x20)) &= ~((1 << (4)));
    asm volatile ("nop");
    asm volatile ("nop");
    asm volatile ("nop");
    asm volatile ("nop");
    (*(volatile uint8_t *) ((0x05) + 0x20)) |= ((1 << (4)));
    asm volatile ("nop");
    asm volatile ("nop");
    asm volatile ("nop");
    asm volatile ("nop");
  }
  (*(volatile uint8_t *) ((0x05) + 0x20)) &= ~((1 << (4)));
  (*(volatile uint8_t *) ((0x05) + 0x20)) &= ~((1 << (5)));
  (*(volatile uint8_t *) ((0x0A) + 0x20)) |= 0xF0;
  (*(volatile uint8_t *) ((0x04) + 0x20)) |= 0x0F;
  __asm__ __volatile__("sei":::"memory");
}
void glcdControlWrite(u08 controller, u08 data) {
  __asm__ __volatile__("cli":::"memory");
  glcdBusyWait(controller);
  (*(volatile uint8_t *) ((0x05) + 0x20)) &= ~((1 << (7)));
  (*(volatile uint8_t *) ((0x05) + 0x20)) &= ~((1 << (5)));
  (*(volatile uint8_t *) ((0x05) + 0x20)) |= ((1 << (4)));
  (*(volatile uint8_t *) ((0x0A) + 0x20)) |= 0xF0;
  (*(volatile uint8_t *) ((0x04) + 0x20)) |= 0x0F;
  (*(volatile uint8_t *) ((0x0B) + 0x20)) &= ~0xF0;
  (*(volatile uint8_t *) ((0x0B) + 0x20)) |= data & 0xF0;
  (*(volatile uint8_t *) ((0x05) + 0x20)) &= ~0x0F;
  (*(volatile uint8_t *) ((0x05) + 0x20)) |= data & 0x0F;
  asm volatile ("nop");
  asm volatile ("nop");
  asm volatile ("nop");
  asm volatile ("nop");
  asm volatile ("nop");
  asm volatile ("nop");
  asm volatile ("nop");
  asm volatile ("nop");
  (*(volatile uint8_t *) ((0x05) + 0x20)) &= ~((1 << (4)));
  __asm__ __volatile__("sei":::"memory");
}
u08 glcdControlRead(u08 controller) {
  register u08 data;
  __asm__ __volatile__("cli":::"memory");
  glcdBusyWait(controller);
  (*(volatile uint8_t *) ((0x05) + 0x20)) &= ~((1 << (7)));
  (*(volatile uint8_t *) ((0x0A) + 0x20)) &= ~(0xF0);
  (*(volatile uint8_t *) ((0x04) + 0x20)) &= ~(0x0F);
  (*(volatile uint8_t *) ((0x05) + 0x20)) |= ((1 << (5)));
  (*(volatile uint8_t *) ((0x05) + 0x20)) |= ((1 << (4)));
  asm volatile ("nop");
  asm volatile ("nop");
  asm volatile ("nop");
  asm volatile ("nop");
  asm volatile ("nop");
  asm volatile ("nop");
  asm volatile ("nop");
  asm volatile ("nop");
  data =
    ((*(volatile uint8_t *) ((0x09) + 0x20)) & 0xF0) |
    ((*(volatile uint8_t *) ((0x03) + 0x20)) & 0x0F);
  (*(volatile uint8_t *) ((0x05) + 0x20)) &= ~((1 << (4)));
  (*(volatile uint8_t *) ((0x05) + 0x20)) &= ~((1 << (5)));
  (*(volatile uint8_t *) ((0x0A) + 0x20)) |= 0xF0;
  (*(volatile uint8_t *) ((0x04) + 0x20)) |= 0x0F;
  __asm__ __volatile__("sei":::"memory");
  return data;
}
void glcdDataWrite(u08 data) {
  register u08 controller = (GrLcdState.lcdXAddr / 64);
  __asm__ __volatile__("cli":::"memory");
  glcdBusyWait(controller);
  (*(volatile uint8_t *) ((0x05) + 0x20)) |= ((1 << (7)));
  (*(volatile uint8_t *) ((0x05) + 0x20)) &= ~((1 << (5)));
  (*(volatile uint8_t *) ((0x05) + 0x20)) |= ((1 << (4)));
  (*(volatile uint8_t *) ((0x0A) + 0x20)) |= 0xF0;
  (*(volatile uint8_t *) ((0x04) + 0x20)) |= 0x0F;
  (*(volatile uint8_t *) ((0x0B) + 0x20)) &= ~0xF0;
  (*(volatile uint8_t *) ((0x0B) + 0x20)) |= data & 0xF0;
  (*(volatile uint8_t *) ((0x05) + 0x20)) &= ~0x0F;
  (*(volatile uint8_t *) ((0x05) + 0x20)) |= data & 0x0F;
  asm volatile ("nop");
  asm volatile ("nop");
  asm volatile ("nop");
  asm volatile ("nop");
  asm volatile ("nop");
  asm volatile ("nop");
  asm volatile ("nop");
  asm volatile ("nop");
  (*(volatile uint8_t *) ((0x05) + 0x20)) &= ~((1 << (4)));
  __asm__ __volatile__("sei":::"memory");
  GrLcdState.ctrlr[controller].xAddr++;
  GrLcdState.lcdXAddr++;
  if (GrLcdState.lcdXAddr >= 128) {
    GrLcdState.lcdYAddr++;
    glcdSetYAddress(GrLcdState.lcdYAddr);
    glcdSetXAddress(0);
  }
}
u08 glcdDataRead(void) {
  register u08 data;
  register u08 controller = (GrLcdState.lcdXAddr / 64);
  __asm__ __volatile__("cli":::"memory");
  glcdBusyWait(controller);
  (*(volatile uint8_t *) ((0x05) + 0x20)) |= ((1 << (7)));
  (*(volatile uint8_t *) ((0x0A) + 0x20)) &= ~(0xF0);
  (*(volatile uint8_t *) ((0x04) + 0x20)) &= ~(0x0F);
  (*(volatile uint8_t *) ((0x05) + 0x20)) |= ((1 << (5)));
  (*(volatile uint8_t *) ((0x05) + 0x20)) |= ((1 << (4)));
  asm volatile ("nop");
  asm volatile ("nop");
  asm volatile ("nop");
  asm volatile ("nop");
  asm volatile ("nop");
  asm volatile ("nop");
  asm volatile ("nop");
  asm volatile ("nop");
  data =
    ((*(volatile uint8_t *) ((0x09) + 0x20)) & 0xF0) |
    ((*(volatile uint8_t *) ((0x03) + 0x20)) & 0x0F);
  (*(volatile uint8_t *) ((0x05) + 0x20)) &= ~((1 << (4)));
  (*(volatile uint8_t *) ((0x05) + 0x20)) &= ~((1 << (5)));
  __asm__ __volatile__("sei":::"memory");
  return data;
}
void glcdReset(u08 resetState) {
}
void glcdSetXAddress(u08 xAddr) {
  u08 i;
  GrLcdState.lcdXAddr = xAddr;
  for (i = 0; i < ((128 + 64 - 1) / 64); i++) {
    glcdControlWrite(i, 0x40 | 0x00);
    GrLcdState.ctrlr[i].xAddr = 0;
  }
  glcdControlWrite((GrLcdState.lcdXAddr / 64),
                   0x40 | (GrLcdState.lcdXAddr & 0x3F));
}
void glcdSetYAddress(u08 yAddr) {
  u08 i;
  GrLcdState.lcdYAddr = yAddr;
  for (i = 0; i < ((128 + 64 - 1) / 64); i++) {
    glcdControlWrite(i, 0xB8 | yAddr);
  }
}
void glcdInit() {
  u08 i;
  glcdInitHW();
  glcdReset(0);
  for (i = 0; i < ((128 + 64 - 1) / 64); i++) {
    glcdControlWrite(i, 0x3E | 0x01);
  }
  glcdClearScreen();
  glcdHome();
}
void glcdHome(void) {
  u08 i;
  glcdStartLine(0);
  glcdSetAddress(0, 0);
  for (i = 0; i < ((128 + 64 - 1) / 64); i++) {
    GrLcdState.ctrlr[i].xAddr = 0;
    GrLcdState.ctrlr[i].yAddr = 0;
  }
}
void glcdClearScreen(void) {
  u08 pageAddr;
  u08 xAddr;
  for (pageAddr = 0; pageAddr < (64 >> 3); pageAddr++) {
    glcdSetAddress(0, pageAddr);
    for (xAddr = 0; xAddr < 128; xAddr++) {
      glcdDataWrite(0x00);
    }
  }
}
void glcdStartLine(u08 start) {
  glcdControlWrite(0, 0xC0 | start);
  glcdControlWrite(1, 0xC0 | start);
}
void glcdSetAddress(u08 x, u08 yLine) {
  glcdSetYAddress(yLine);
  glcdSetXAddress(x);
}
void glcdGotoChar(u08 line, u08 col) {
  glcdSetAddress(col * 6, line);
}
void glcdDelay(u16 p) {
  unsigned int i;
  unsigned char j;
  for (i = 0; i < p; i++)
    for (j = 0; j < 10; j++);
}

extern void *bsearch(const void *__key, const void *__base, size_t __nmemb,
                     size_t __size, int (*__compar) (const void *,
                                                     const void *));

volatile uint8_t old_h, old_m, old_s;
volatile uint8_t timeunknown = 1;
volatile uint8_t date_m, date_d, date_y;
volatile uint8_t volume;
volatile uint8_t sleepmode = 0;
volatile uint8_t region;
volatile uint8_t time_format;
volatile uint8_t minute_changed = 0, hour_changed = 0, second_changed = 0;
void __vector_13(void) __attribute__ ((signal, used, externally_visible));
void __vector_13(void) {
  (*(volatile uint8_t *) ((0x08) + 0x20)) ^= (1 << (3));
}

volatile uint16 millis = 0;
volatile uint16 animticker;
void __vector_14(void) __attribute__ ((signal, used, externally_visible));
void __vector_14(void) {
  if (millis)
    millis--;
  if (animticker)
    animticker--;
}
/*
void setalarmstate(void) {
  if (0) { ROM_putstring((__extension__({static char __c[] __attribute__((__progmem__)) = ("a"); &__c[0];})), 1); };
  if ((*(volatile uint8_t *)((0x03) + 0x20)) & (1 << (6))) {
    if (alarm_on) {
      alarm_on = 0;
      alarm_tripped = 0;
      snoozetimer = 0;
      if (alarming) {
 if (0) { ROM_putstring((__extension__({static char __c[] __attribute__((__progmem__)) = ("alarm off"); &__c[0];})), 1); };
 alarming = 0;
 (*(volatile uint8_t *)(0x81)) = 0;
 (*(volatile uint8_t *)((0x08) + 0x20)) &= ~(1 << (3));
      }
    }
  } else {
    if (!alarm_on) {
      alarm_on = 1;
      snoozetimer = 0;
   score_mode = 3;
   score_mode_timeout = 3;
      if (0) { ROM_putstring((__extension__({static char __c[] __attribute__((__progmem__)) = ("alarm on"); &__c[0];})), 1); };
    }
  }
}
*/
void init_eeprom(void) {
  if (__eerd_byte_m328p((uint8_t *) 0) != 0xC3) {
    __eewr_byte_m328p((uint8_t *) 1, 8);
    __eewr_byte_m328p((uint8_t *) 2, 0);
    __eewr_byte_m328p((uint8_t *) 3, 16);
    __eewr_byte_m328p((uint8_t *) 4, 1);
    __eewr_byte_m328p((uint8_t *) 5, 0);
    __eewr_byte_m328p((uint8_t *) 6, 0);
    __eewr_byte_m328p((uint8_t *) 7, 10);
    __eewr_byte_m328p((uint8_t *) 0, 0xC3);
  }
}
int main(void) {
  uint8_t mcustate;
  mcustate = (*(volatile uint8_t *) ((0x34) + 0x20));
  /* disable the WDT */
  (*(volatile uint8_t *) ((0x34) + 0x20)) = 0;
  __asm__ __volatile__("in __tmp_reg__, __SREG__" "\n\t" "cli" "\n\t"
                       "sts %0, %1" "\n\t" "sts %0, __zero_reg__" "\n\t"
                       "out __SREG__,__tmp_reg__"
                       "\n\t"::"M"(((uint16) &
                                    ((*(volatile uint8_t *) (0x60))))),
                       "r"((uint8_t) ((1 << (4)) | (1 << (3)))):"r0");
  /* initialize the serial port for 19,200 bps */
  uart_init(26);
  /* set up buzzer frequency */
  (*(volatile uint8_t *) ((0x07) + 0x20)) |= (1 << (3));  // PIEZO_DDR |= _BV(PIEZO)

  // stuff from clock_init()
  (*(volatile uint8_t *)(0xB1)) = (1 << (2)) | (1 << (1)) | (1 << (0));  // TCCR2B = _BV(CS22) | _BV(CS21) | _BV(CS20); // div by 1024
  (*(volatile uint8_t *)(0x70)) = (1 << (0));  // TIMSK2 = _BV(TOIE2)  // enable interrupt
  __asm__ __volatile__ ("sei" ::: "memory");   // sei()  Sets the Global Interrupt Flag (I) in SREG (Status Register)  --- enable interrupts

  init_eeprom();
  region = __eerd_byte_m328p((uint8_t *) 5);
  time_format = __eerd_byte_m328p((uint8_t *) 6);
  initbuttons();
  //   setup 1ms timer on timer0
  (*(volatile uint8_t *) ((0x24) + 0x20)) = (1 << (1));
  (*(volatile uint8_t *) ((0x25) + 0x20)) = (1 << (1)) | (1 << (0));
  (*(volatile uint8_t *) ((0x27) + 0x20)) = 125;
  (*(volatile uint8_t *) (0x6E)) |= (1 << (1));
  // turn backlight on
  (*(volatile uint8_t *) ((0x0A) + 0x20)) |= (1 << (3));
  (*(volatile uint8_t *) (0xB0)) = (1 << (5));
  (*(volatile uint8_t *) (0xB0)) |= (1 << (1)) | (1 << (0));
  (*(volatile uint8_t *) (0xB1)) |= (1 << (3));
  (*(volatile uint8_t *) (0xB3)) = 16;
  (*(volatile uint8_t *) (0xB4)) = __eerd_byte_m328p((uint8_t *) 3);

  (*(volatile uint8_t *) ((0x04) + 0x20)) |= (1 << (5));   // DDRB |= _BV(5)

  beep(4000, 100);


  //glcdInit locks and disables interrupts in one of its functions.  If the LCD is not
  //plugged in, glcd will run forever.  For good reason, it would be desirable to know
  //that the LCD is plugged in and working correctly as a result.  This is why we are
  //using a watch dog timer.  The lcd should initialized in way less than 500 ms.

  //   wdt_enable(WDTO_2S);
  __asm__ __volatile__ ( 
          "in __tmp_reg__,__SREG__" "\n\t" 
          "cli" "\n\t" 
          "wdr" "\n\t" 
          "sts %0,%1" "\n\t" 
          "out __SREG__,__tmp_reg__" "\n\t" 
          "sts %0,%2" "\n\t" 
          : : "M" (((uint16) &((*(volatile uint8_t *)(0x60))))), 
              "r" ((1 << (4)) | (1 << (3))), 
              "r" ((uint8_t) ((7 & 0x08 ? (1 << (5)) : 0x00) | (1 << (3)) | (7 & 0x07)) ) 
          : "r0" );

  glcdInit();
  glcdClearScreen();
  
  pacman_state s;
  s.x = 10; s.y = 10; s.dir = PACMAN_RIGHT; s.mouth = PACMAN_MOUTH_OPEN_2;
  
  init_pacman(&s);

  while (1) {
    animticker = 128;
 
    pacman_gobble(&s, 0, 0);
    change_pacman(&s);
    
    if (just_pressed & 0x1) {
        // the button closest to the power cable got pressed
        // acknowlege the button press
        just_pressed = 0;
        
        s.dir = (s.dir+1) % 4;
    }
    if (just_pressed & 0x3) {
        // the middle button got pressed
        // acknowlege the button press
        just_pressed = 0;
        
        switch (s.dir) {
        case PACMAN_RIGHT:
            s.dir = PACMAN_LEFT;
            break;
        case PACMAN_LEFT:
            s.dir = PACMAN_RIGHT;
            break;
        case PACMAN_UP:
            s.dir = PACMAN_DOWN;
            break;
        case PACMAN_DOWN:
            s.dir = PACMAN_UP;
            break;
        }
    }
    if (just_pressed & 0x5) {
        // the button farthest from the power cable got pressed
        // acknowlege the button press
        just_pressed = 0;
        
        if (s.dir > 0) {
            s.dir--;
        } else {
            s.dir = 3;
        }
    }
    if ((*(volatile uint8_t *)((0x03) + 0x20)) & (1 << (6))) {
        // the switch next to the light is on
    }

    *(volatile uint8_t *) 0x25 |= (1 << 5);  // PORTB |= _BV(5);

    // EVERY TIME YOU DRAW, THE DISPLAY GLITCHES OUT!!!
    // So don't redraw unless you actually want to change the display


    //drawdisplay();
    *(volatile uint8_t *) 0x25 &= ~(1 << 5); // PORTB &= ~_BV(5);
    //__asm__ __volatile__("wdr");
    while (animticker);
  }
}

void __vector_11(void) __attribute__ ((signal, used, externally_visible));
void __vector_11(void) {
  (*(volatile uint8_t *) ((0x08) + 0x20)) ^= (1 << (3));
}
void beep(uint16 freq, uint16 duration) {
  // use timer 1 for the piezo/buzzer 
  (*(volatile uint8_t *) (0x80)) = 0;  // TCCR1A
  (*(volatile uint8_t *) (0x81)) = (1 << (3)) | (1 << (0));  // TCCR1B = _BV(WGM12) | _BV(CS10)
  (*(volatile uint8_t *) (0x6F)) = (1 << (0)) | (1 << (1));  // TIMSK1 = _BV(TOIE1) | _BV(OCIE1A)
  (*(volatile uint16 *) (0x88)) = (8000000 / freq) / 2;    // OCR1A = (F_CPU / freq) / 2
  _delay_ms(duration);
  (*(volatile uint8_t *) (0x81)) = 0;  // TCCR1B
  // turn off piezo
  (*(volatile uint8_t *) ((0x08) + 0x20)) &= ~(1 << (3));    // PIEZO_PORT &= ~_BV(PIEZO)
}
void drawArrow(uint8_t x, uint8_t y, uint8_t l) {
  glcdFillRectangle(x, y, l, 1, 1);
  glcdSetDot(x + l - 2, y - 1);
  glcdSetDot(x + l - 2, y + 1);
  glcdSetDot(x + l - 3, y - 2);
  glcdSetDot(x + l - 3, y + 2);
}
void printnumber(uint8_t n, uint8_t inverted) {
  glcdWriteChar(n / 10 + '0', inverted);
  glcdWriteChar(n % 10 + '0', inverted);
}


uint8_t t2divider1 = 0, t2divider2 = 0;
void __vector_9(void) __attribute__ ((signal, used, externally_visible));
void __vector_9(void) {
  __asm__ __volatile__("wdr");
  if (t2divider1 == 80) {
    t2divider1 = 0;
  } else {
    t2divider1++;
    return;
  }
  
  //This occurs at 6 Hz
  
  if (t2divider2 == 6) {
    t2divider2 = 0;
  } else {
    t2divider2++;
    return;
  }
  if (buttonholdcounter) {
    buttonholdcounter--;
  }
  if (timeoutcounter) {
    timeoutcounter--;
  }
}
uint8_t leapyear(uint16 y) {
  return ((!(y % 4) && (y % 100)) || !(y % 400));
}
void tick(void) {
}
inline uint8_t i2bcd(uint8_t x) {
  return ((x / 10) << 4) | (x % 10);
}
void uart_init(uint16 BRR) {
  (*(volatile uint16 *) (0xC4)) = BRR;
  (*(volatile uint8_t *) (0xC1)) = (1 << (4)) | (1 << (3));
  (*(volatile uint8_t *) (0xC2)) = (1 << (3)) | (3 << 1);
  (*(volatile uint8_t *) ((0x0A) + 0x20)) |= (1 << (1));
  (*(volatile uint8_t *) ((0x0A) + 0x20)) &= ~(1 << (0));
}
void delay_10us(uint8_t ns) {
  uint8_t i;
  while (ns != 0) {
    ns--;
    for (i = 0; i < 30; i++) {
      asm volatile ("nop\n\t");
    }
  }
}
void delay_s(uint8_t s) {
  while (s--) {
    _delay_ms(1000);
  }
}
int uart_putchar(char c) {
  do {
  } while ((!
            ((*(volatile uint8_t *)
              (((uint16) & ((*(volatile uint8_t *) (0xC0)))))) & (1 <<
                                                                    (5)))));
  (*(volatile uint8_t *) (0xC6)) = c;
  return 0;
}
char uart_getchar(void) {
  while (!((*(volatile uint8_t *) (0xC0)) & (1 << (7))));
  return (*(volatile uint8_t *) (0xC6));
}
char uart_getch(void) {
  return ((*(volatile uint8_t *) (0xC0)) & (1 << (7)));
}
void ROM_putstring(const char *str, uint8_t nl) {
  uint8_t i;
  for (i=0; (__extension__({ uint16 __addr16 = (uint16)((uint16)(&str[i])); uint8_t __result; __asm__ ( "lpm %0, Z" "\n\t" : "=r" (__result) : "z" (__addr16) ); __result; })); i++) {
    uart_putchar((__extension__({ uint16 __addr16 = (uint16)((uint16)(&str[i])); uint8_t __result; __asm__ ( "lpm %0, Z" "\n\t" : "=r" (__result) : "z" (__addr16) ); __result; })));
  }
  if (nl) {
    uart_putchar('\n');
    uart_putchar('\r');
  }
}
void uart_puts(const char *str) {
  while (*str)
    uart_putchar(*str++);
}
void uart_putc_hex(uint8_t b) {
  if ((b >> 4) < 0x0a)
    uart_putchar((b >> 4) + '0');
  else
    uart_putchar((b >> 4) - 0x0a + 'a');
  if ((b & 0x0f) < 0x0a)
    uart_putchar((b & 0x0f) + '0');
  else
    uart_putchar((b & 0x0f) - 0x0a + 'a');
}
void uart_putw_hex(uint16 w) {
  uart_putc_hex((uint8_t) (w >> 8));
  uart_putc_hex((uint8_t) (w & 0xff));
}
void uart_putdw_hex(uint32_t dw) {
  uart_putw_hex((uint16) (dw >> 16));
  uart_putw_hex((uint16) (dw & 0xffff));
}
void uart_putw_dec(uint16 w) {
  uint16 num = 10000;
  uint8_t started = 0;
  while (num > 0) {
    uint8_t b = w / num;
    if (b > 0 || started || num == 1) {
      uart_putchar('0' + b);
      started = 1;
    }
    w -= b * num;
    num /= 10;
  }
}
void uart_put_dec(int8_t w) {
  uint16 num = 100;
  uint8_t started = 0;
  if (w < 0) {
    uart_putchar('-');
    w *= -1;
  }
  while (num > 0) {
    int8_t b = w / num;
    if (b > 0 || started || num == 1) {
      uart_putchar('0' + b);
      started = 1;
    }
    w -= b * num;
    num /= 10;
  }
}
void uart_putdw_dec(uint32_t dw) {
  uint32_t num = 1000000000;
  uint8_t started = 0;
  while (num > 0) {
    uint8_t b = dw / num;
    if (b > 0 || started || num == 1) {
      uart_putchar('0' + b);
      started = 1;
    }
    dw -= b * num;
    num /= 10;
  }
}
