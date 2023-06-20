
#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


// #define LONG_MAX	9223372036854775807L
// 9223372036854775807		-9223372036854775808
// #define LONG_MIN	-9223372036854775808

int main()
{
	int	count;

	// count = ft_printf("%u", LONG_MAX);
	count = ft_printf("%x", -42);
	printf("\n%d", count);

	printf("\n");
	// count = printf("%lu", LONG_MAX);
	count = printf("%x", -42);
	printf("\n%d", count);
	return 0;
}
