/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:47:08 by evportel          #+#    #+#             */
/*   Updated: 2023/06/15 18:33:47 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int printf(const char *restrict format, ...);
int ft_printf(const char *format, ...)
{
	int	length;
	va_list	ptr_args;
	char *print;

	va_start(ptr_args, format);

	 = ft_strchar(format);

	if (format[1] == 'c'){
		print = va_arg(ptr_args, int);
		write(1, print, sizeof(char));
	}
	
	length = 1;
	va_end(ptr_args);
	return (length);
}

// Sua função deve lidar com as seguintes conversões: c s p d i u x X %

// C program for the above approach
 
#include <stdarg.h>
#include <stdio.h>
 
 
// Driver Code
int main()
{
	char charactere = 'h';
    ft_printf("%c", charactere);
 
    return 0;
}

// Variadic function to add numbers
int AddNumbers(int n, ...)
{
    int Sum = 0;
 
    // Declaring pointer to the
    // argument list
    va_list ptr;
 
    // Initializing argument to the
    // list pointer
    va_start(ptr, n);
 
    for (int i = 0; i < n; i++)
 
        // Accessing current variable
        // and pointing to next one
        Sum += va_arg(ptr, int);
 
    // Ending argument list traversal
    va_end(ptr);
 
    return Sum;
}