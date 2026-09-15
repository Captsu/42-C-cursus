/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 19:18:01 by elise             #+#    #+#             */
/*   Updated: 2026/09/14 21:01:53 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/libft.h"
#include "ft_printf.h"

int check_error(const char *format)
{
	int i;

	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && (ft_strchr("cspdiuxX%", format[i + 1]) != 0))
		{
			if (format[i + 1] == '%')
				i++;
			else if (format[i + 1] == 0)
				break ;
		}
		i++;
	}
	if (format[i] != 0)
		return (0);
	return (1);
}