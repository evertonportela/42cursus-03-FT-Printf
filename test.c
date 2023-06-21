
#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
	int	count;

	// count = ft_printf("%u", LONG_MAX);
	count = ft_printf("%X", 0);
	printf("\n%d", count);

	printf("\n");
	// count = printf("%lu", LONG_MAX);
	count = printf("%X", -42);
	printf("\n%d", count);
	return 0;
}
