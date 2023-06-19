
#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int	count;

	char content[] = "texto";
	char *p;
	p = content;
	count = ft_printf("%p", NULL);
	printf("\n%d", count);
	// return 0;

	// char content[] = "texto";
	// char *p;
	// p = content;
	printf("\n");
	count = printf("%p", NULL);
	printf("\n%d", count);
	return 0;
}
