/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 17:42:16 by evportel          #+#    #+#             */
/*   Updated: 2023/06/19 11:58:26 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
	addOneMore(1);
}

int	ft_putstr(char *str)
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

int ft_putptr(unsigned long nbr)
{
	if (nbr == 0)
	{
		ft_putstr("(nil)");
		return (0);
	}
	if (nbr > 15)
		ft_putptr(nbr / 16);
	write(1, "0", 1);
	return (1);
}
