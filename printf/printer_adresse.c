/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer_adresse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 19:08:31 by elise             #+#    #+#             */
/*   Updated: 2026/09/15 04:11:18 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/libft.h"
#include "ft_printf.h"

int	printer_adresse(char *str)
{
	char	adresse[12];
	long	padresse;
	char	*base;
	int		i;

	base = "0123456789abcdef";
	i = 11;
	padresse = (long)str;
	while (padresse > 0)
	{
		adresse[i] = base[padresse % 16];
		padresse /= 16;
		i--;
	}
	adresse[12] = 0;
	ft_putstr_fd("0x", 1);
	ft_putstr_fd(adresse, 1);
	return (ft_strlen(adresse));
}
