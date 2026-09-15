/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer_adresse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 19:08:31 by elise             #+#    #+#             */
/*   Updated: 2026/09/15 04:41:28 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/libft.h"
#include "ft_printf.h"

int	printer_adresse(void *str)
{
	char	adresse[17];
	long	padresse;
	char	*base;
	int		i;
	int		len;

	base = "0123456789abcdef";
	padresse = (unsigned long)str;
	i = 15;
	adresse[16] = 0;
	if (padresse == 0)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	while (padresse > 0)
	{
		adresse[i] = base[padresse % 16];
		padresse /= 16;
		i--;
	}
	ft_putstr_fd("0x", 1);
	ft_putstr_fd(&adresse[i + 1], 1);
	len = ft_strlen(&adresse[i + 1]);
	return (len + 2);
}
