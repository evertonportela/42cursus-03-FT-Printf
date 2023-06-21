#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	main(void)
{
	int	count;

	count = ft_printf("%X", -9);
	printf("\n%d", count);
	printf("\n");
	count = printf("%X", -9);
	printf("\n%d", count);
	return (0);
}
