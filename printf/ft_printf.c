/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 01:58:28 by elise             #+#    #+#             */
/*   Updated: 2026/09/15 01:55:15 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "Libft/libft.h"

int	ft_printf(const char *format, ...)

{
	int	i;
	int	count;
	va_list	args;
	
	if (check_error(format) == 0)
	{
		ft_putstr_fd("Invalid argument\n", 1);
		return (-1);
	}
	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			count = count + printer_decider(format[i + 1], args);
			i++;
		}
		else
			count = count + write(1, &format[i], 1);	
		i++;
	}
	return (count);
}

int main(void)
{
	int nb = 20;
	int count;
	char str[] = "test";
	
	//count = ft_printf("%x %X\n", 42, 42);
	printf("%%d: %d %%s: %s %%c: %c %%i: %i %%p: %p %%u: %u %%x: %x %%X: %X\n", nb, str, 'A', 50, str, 42000, 42, 42);
	count = ft_printf("%%d: %d %%s: %s %%c: %c %%i: %i %%p: %p %%u: %u %%x: %x %%X: %X\n", nb, str, 'A', 50, str, 42000, 42, 42);
	printf("%d\n", count);
	return (0);
}

/*	c = char OK
	s = string OK
	i (pour l'output) et d = int OK
	p = adresse
	u = unsigned int
	x et X = hexa

	Here are the requirements: cspdiuxX%
• Do not implement the buffer management of the original printf().
• Your function has to handle the following conversions: cspdiuxX%
• Your function will be compared against the original printf().
• You must use the command ar to create your library.
Using the libtool command is forbidden.
• Your libftprintf.a has to be created at the root of your repository.
• Your header file must be named ft_printf.h and must contain the prototype of
your ft_printf() function.*/