#include "ft_printf.h"
#include <stdio.h>

int main()
{
	int	count;
	ft_printf("Modificador c");
	// One arg
	char	letra_1 = 'h';
	ft_printf("\nImprimir %c", letra_1);
	
	// Two arg
	char	letra_2 = 'y';
	count = ft_printf("\nImprimir %c %c", letra_1, letra_2);

	// Three arg
	char	letra_3 = 'e';
	count = ft_printf("Imprimir %c %c %c", letra_1, letra_2, letra_3);

	// ft_printf("\n\nModificador s");
	// One arg
	// char	*string = "texto";
	// ft_printf("\nImprimir, %s", string);
	printf("\n%d", count);
	return 0;
}
