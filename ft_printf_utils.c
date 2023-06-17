/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 17:42:16 by evportel          #+#    #+#             */
/*   Updated: 2023/06/17 16:23:25 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *s, int c)
{
	int	index;

	index = 0;
	c = (unsigned char)c;
	if (s[index] == 0)
		return ((char *)s);
	while (s[index])
	{
		if (s[index] == c)
		{
			return ((char *)s + index);
		}
		else if (s[index + 1] == c)
		{
			return ((char *)s + (index + 1));
		}
		index++;
	}
	return (NULL);
}

size_t	ft_strlen(const char *s)
{
	unsigned long int	length;

	length = 0;
	while (s[length])
	{
		length++;
	}
	return (length);
}
