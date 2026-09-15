/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer_adresse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 19:08:31 by elise             #+#    #+#             */
/*   Updated: 2026/09/15 01:39:23 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/libft.h"
#include "ft_printf.h"

int printer_adresse(char *str)
{
	char	adresse[12];
	long 	pAdresse;
	char	base[] = "0123456789abcdef";
	int	i;

	i = 11;
	pAdresse = (long)str;
	while(pAdresse > 0)
	{
		adresse[i] = base[pAdresse % 16];
		pAdresse /= 16;
		i--;
	}
	adresse[12] = 0;
	ft_putstr_fd("0x", 1);
	ft_putstr_fd(adresse, 1);
	return (ft_strlen(adresse));
}