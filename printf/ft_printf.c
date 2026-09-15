/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 01:58:28 by elise             #+#    #+#             */
/*   Updated: 2026/09/15 05:12:17 by elise            ###   ########.fr       */
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

/*int	main(void)
{
	char	*str;

	str = NULL;
	printf("%d", 42, 100, 200);
	ft_printf("%d", 42, 100, 200);
	return (0);
}*/
