/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 19:54:21 by elise             #+#    #+#             */
/*   Updated: 2026/09/15 01:41:09 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/libft.h"
#include "ft_printf.h"

int	numlen(long n);

int printer_hexa(int nb, char x)
{
	int		len;
	char	c;
	char	base[] = "0123456789abcdef";
	
	c = 0;
	if (nb > 0)
	{
		printer_hexa(nb / 16, c);
		if (nb % 16 < 10)
			ft_putnbr_fd(nb % 16, 1);
		else
			{
				c = base[nb % 16];
				if (x == 'x')
					ft_putchar_fd(c, 1);
				else if (x == 'X')
					ft_putchar_fd(c - 32, 1);
			}
	}
	len = numlen(nb);
	return (len);
}