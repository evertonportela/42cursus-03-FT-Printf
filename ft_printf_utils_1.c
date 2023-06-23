/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 17:42:16 by evportel          #+#    #+#             */
/*   Updated: 2023/06/23 10:43:19 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
/** Prints a single character, within the standard ascii table,
 * and adds 1 to the static variable. */
{
	write(1, &c, 1);
	add_one_more(1);
}

int	ft_putstr(char *str)
/** Prints a valid string, 
 * reusing the ft_putchar function to print each character. 
 * When null, expressly prints the word 'null'.*/
{
	int	n;

	n = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[n] != '\0')
	{
		ft_putchar(str[n]);
		n++;
	}
	return (1);
}

int	ft_putptr(unsigned long nbr, int flag)
/** Prints in hexadecimal format,
 * the memory address of the referenced pointer,
 * prefixed with the characters '0x'.
 * Converting an 'unsigned long' parameter to hexadecimal.
 * When null, expressly write the word 'nil'.*/
{
	if (nbr == 0)
	{
		ft_putstr("(nil)");
		return (0);
	}
	if (flag == 0)
		ft_putstr("0x");
	if (nbr > 15)
		ft_putptr(nbr / 16, 1);
	write(1, &"0123456789abcdef"[nbr % 16], sizeof(char));
	add_one_more(1);
	return (1);
}

void	ft_putnbr(int nb)
/** Prints an integer parameter, 
 * including its sign, if it is a negative decimal.*/
{
	unsigned int	number;

	if (nb < 0)
	{
		ft_putchar('-');
		number = nb * -1;
	}
	else
		number = nb;
	if (number >= 10)
		ft_putnbr(number / 10);
	ft_putchar(number % 10 + '0');
}

void	ft_putnbr_unsigned(unsigned int nb)
/** Prints an integer parameter, converting it to an unsigned decimal. */
{
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}
