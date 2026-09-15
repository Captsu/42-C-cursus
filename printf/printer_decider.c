/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer_decider.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 02:22:50 by elise             #+#    #+#             */
/*   Updated: 2026/09/15 04:34:57 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/libft.h"
#include "ft_printf.h"

int	printer_decider(char c, va_list	args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = count + printer_char(va_arg(args, int));
	else if (c == 'd' || c == 'i')
		count = count + printer_dig(va_arg(args, int));
	else if (c == 's')
		count = count + printer_string(va_arg(args, char *));
	else if (c == 'p')
		count = count + printer_adresse(va_arg(args, void *));
	else if (c == 'x' || c == 'X')
		count = count + printer_hexa(va_arg(args, unsigned int), c);
	else if (c == 'u')
		count = count + printer_unsigned_int(va_arg(args, unsigned int));
	else if (c == '%')
		count = count + printer_pourcentage(c);
	return (count);
}
