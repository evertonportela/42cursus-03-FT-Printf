/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 17:42:16 by evportel          #+#    #+#             */
/*   Updated: 2023/06/20 19:21:42 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex_lower(unsigned int nbr)
//	int ft_putptr(unsigned long nbr, int flag)
{
	if (nbr == 0)
	{
		ft_putstr("(nil)");
		return (0);
	}
	// if (flag == 0)
	// 	ft_putstr("0x");
	if (nbr > 15)
		ft_put_hex_lower(nbr / 16, 1);
	write(1, &"0123456789abcdef"[nbr % 16], sizeof(char));
	addOneMore(1);
	return (1);
}
