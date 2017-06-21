#include "unistd.h"
#include "stdarg.h"

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_printf(char *fmt, ...)
{
	int i = 0;
	va_list ap;

	while(fmt[i])
		ft_putchar(fmt[i++]);
	va_start(ap, fmt);
	va_end(ap);
	return (0);
}


