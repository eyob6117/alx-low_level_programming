#include <stdlib>
#include <stdarg.h>

/**
 * _get-func - gets the right function for task
 *
 *
 */
int (*_get-func(char *s))(char *str)
{
  
op_t ops[] =
    {
     {"%d", op_int},
     {"%c", op_char},
     {"%i", op_int},
     {"%u", op_unsign},
     {"%o", op_oct},
     {"%x", op_lower_hex},
     {"%X", op_upper_hex},
    };
}
