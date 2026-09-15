/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 19:54:21 by elise             #+#    #+#             */
/*   Updated: 2026/09/15 04:43:44 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/libft.h"
#include "ft_printf.h"

int	printer_hexa(unsigned int nb, char format)
{
	char	*base;
	char	hexa[9];
	int		i;
	int		len;

	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nb == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	i = 7;
	hexa[8] = '\0';
	while (nb > 0)
	{
		hexa[i] = base[nb % 16];
		nb /= 16;
		i--;
	}
	len = ft_strlen(&hexa[i + 1]);
	ft_putstr_fd(&hexa[i + 1], 1);
	return (len);
}
