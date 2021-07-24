#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "holberton.h"

/** 
 * _printf - replicate of the C standard 'printf' function.
 * @format: string to be printed
 * @...: ellipsis (unknown arguments [varidiac].
 *
 * Return: Count of printed characters.
 */

int _printf(const char *format, ...)
{
  va_list ap;
  int i, j;
  char *str;

  j = 0;

  if (format != NULL)
    {
      for (i = 0; str[i] != '\0'; i++)
	{
	  if (str[i] == '%')
	    {
	      if (str[i + 1] == 'c')
		{
		  //call function
		}
	      else
		{
		  if (str[i + 1] == 's')
		    {
		      //call function
		    }
		}
	    }
	  else 
	    {
	      _putchar(str[i]);
	    }
       j++;
}
}

return (j);
}
