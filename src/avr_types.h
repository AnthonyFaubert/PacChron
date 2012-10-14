
typedef          char      prog_char    __attribute__((__progmem__));
typedef          char      prog_int8_t  __attribute__((__progmem__));
typedef          short     prog_int16_t __attribute__((__progmem__));
typedef          long      prog_int32_t __attribute__((__progmem__));

typedef unsigned char      prog_uchar    __attribute__((__progmem__));
typedef unsigned char      prog_uint8_t  __attribute__((__progmem__));
typedef unsigned short     prog_uint16   __attribute__((__progmem__));
typedef unsigned long      prog_uint32_t __attribute__((__progmem__));
typedef unsigned long long prog_int64_t  __attribute__((__progmem__));
typedef unsigned long long prog_uint64_t __attribute__((__progmem__));

typedef          int int8_t   __attribute__((__mode__(__QI__)));
typedef          int int16_t  __attribute__((__mode__(__HI__)));
typedef          int int32_t  __attribute__((__mode__(__SI__)));
typedef          int int64_t  __attribute__((__mode__(__DI__)));

typedef unsigned int uint8_t  __attribute__((__mode__(__QI__)));
typedef unsigned int uint16_t __attribute__((__mode__(__HI__)));
typedef unsigned int uint32_t __attribute__((__mode__(__SI__)));
typedef unsigned int uint64_t __attribute__((__mode__(__DI__)));

typedef unsigned char      u08;
typedef unsigned short     u16;
typedef unsigned long      u32;
typedef unsigned long long u64;

typedef   signed char      s08;
typedef   signed short     s16;
typedef   signed long      s32;
typedef   signed long long s64;

typedef unsigned int size_t;

typedef int (*__compar_fn_t)(const void *, const void *);
