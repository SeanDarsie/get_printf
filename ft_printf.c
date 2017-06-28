#include "unistd.h"
#include "stdarg.h"
#include <stdio.h>

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
	i = va_arg(ap, int);
	printf("%i", i);
	va_end(ap);
	return (0);
}


