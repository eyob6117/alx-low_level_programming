#ifndef HOLBERTON_H
#define HOLBERTON_H

int _printf(const char *format, ...);
int _putchar(char c);

typedef struct op
{
  char *op;
  int (*f)(char *str);
} opt_t;

#endif
