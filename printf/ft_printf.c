/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 01:58:28 by elise             #+#    #+#             */
/*   Updated: 2026/09/15 04:20:04 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "Libft/libft.h"

int	ft_printf(const char *format, ...)

{
	int		i;
	int		count;
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
	va_end(args);
	return (count);
}

int	main(void)
{
	char	str[] = "test";
	char	*len;
	int		count;
	int		nb;

	len = "%d: 20 %s: test %c: A %i: 50 %p: 0x7fff604d4963 %u: 42000 %x: 2a %X: 2A";
	nb = 20;
	printf("%%d: %d %%s: %s %%c: %c %%i: %i %%p: %p %%u: %u %%x: %x %%X: %X\n", nb, str, 'A', 50, str, 42000, 42, 42);
	printf("%d\n", (int)strlen(len));
	count = ft_printf("%%d: %d %%s: %s %%c: %c %%i: %i %%p: %p %%u: %u %%x: %x %%X: %X\n", nb, str, 'A', 50, str, 42000, 42, 42);
	printf("%d\n", count - 1);
	return (0);
}
