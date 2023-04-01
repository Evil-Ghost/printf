#ifndef MAIN_H
#define MAIN_H
#define INT_BITS (4 * 8)

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * struct call - struct call
 * @t: t - flag for data type
 * @f: function - assocated function
 *
 */
typedef struct call
{
        char t;
        int (*f)(char *, va_list, int);
} call_t;
int _printf(const char *format, ...);
int buff_append(char *buff_dest, va_list ap, int buff_count, char type);
int print_buff(char *buff, unsigned int nbuff);
int str_len(char *s);
char *_strcpy(char *dest, char *src);
int char_prt(char *buff_dest, va_list ap, int buff_count);
int str_prt(char *buff_dest, va_list ap, int buff_count);
int int_prt(char *buff_dest, va_list list, int buff_count);
int per_prt(char *buff_dest, va_list ap, int buff_count);
int bin_prt(char *buff_dest, va_list ap, int buff_count);
int oct_prt(char *buff_dest, va_list ap, int buff_count);
int parse_hex(char *buff_dest, va_list ap, int buff_count);
int prt_X(char *buff_dest, va_list ap, int buff_count);
int ut_prt(char *buff_dest, va_list ap, int buff_count);
int rev1_prt(char *buff_dest, va_list ap, int buff_count);
int Rev_prt(char *buff_dest, va_list ap, int buff_count);

#endif
