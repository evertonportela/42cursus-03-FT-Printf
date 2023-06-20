/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 17:42:16 by evportel          #+#    #+#             */
/*   Updated: 2023/06/20 12:27:39 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexadecimal_unsigned(unsigned long nb)
{
	char	hex[16];
	int		index;
	int		rest;

	index = 0;
	while (nb != 0)
	{
		rest = nb % 16;
		if (rest < 10)
			hex[index] = rest + '0'; //digito hexadecimal de 0 a 9
		else
			hex[index] = rest + 'a' - 10; //dígito hexadecimal de 'a' a 'f'
		nb /= 16;
		index++;
	}
	ft_putstr(hex);
	// return (1);
}

// void decimalToHexadecimal(int num) {
//     char hex[16];
//     int i = 0;
    
//     while (num != 0) {
//         int rem = num % 16;
        
//         if (rem < 10)
//             hex[i] = rem + '0';  // Dígito hexadecimal de 0 a 9
//         else
//             hex[i] = rem + 'A' - 10;  // Dígito hexadecimal de A a F
        
//         num /= 16;
//         i++;
//     }
    
//     printf("Número em hexadecimal: ");
    
//     if (i == 0)
//         printf("0");  // Se o número original for zero
    
//     for (int j = i - 1; j >= 0; j--)
//         printf("%c", hex[j]);
    
//     printf("\n");
// }

// int	ft_putnbr_unsigned(long int nb)
// {
// 	unsigned long int	number;

// 	if (nb < 0)
// 		number = nb * -1;
// 	else
// 		number = nb;
// 	if (number >= 10)
// 		ft_putnbr(number / 10);
// 	ft_putchar(number % 10 + '0');
// 	return (1);
// }

