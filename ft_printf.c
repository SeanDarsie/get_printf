#include "unistd.h"
#include "stdarg.h"

int ft_printf(char *fmt, ...)
{
	int i = 0;
	va_list ap;

	while(fmt[i])
		write(1, fmt[i++], 1);
	va_start(ap, fmt);
	va_end(ap);
}

