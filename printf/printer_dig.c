/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer_dig.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 18:37:44 by elise             #+#    #+#             */
/*   Updated: 2026/09/15 05:29:15 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	printer_dig(int nb)
{
	int	len;

	len = numlen(nb);
	ft_putnbr_fd(nb, 1);
	return (len);
}
