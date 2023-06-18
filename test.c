
#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int	count;

	char *p = NULL;
	count = ft_printf(" NULL %s NULL ", p);
	printf("\n%d", count);
	return 0;

// 	char *p = NULL;
// 	count = printf(" NULL %s NULL ", p);
// 	printf("\n%d", count);
// 	return 0;
}
