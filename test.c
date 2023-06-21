/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:30:55 by evportel          #+#    #+#             */
/*   Updated: 2023/06/21 15:30:56 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	main(void)
{
	int	count;

	count = ft_printf(" %%   %%   %% ");
	printf("\n%d", count);
	printf("\n");
	count = printf(" %%   %%   %% ");
	printf("\n%d", count);
	return (0);
}
