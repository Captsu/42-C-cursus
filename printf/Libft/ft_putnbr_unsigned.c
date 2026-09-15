/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 23:18:49 by elise             #+#    #+#             */
/*   Updated: 2026/09/15 05:23:05 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_unsigned(unsigned int n)
{
	char	c;

	if (n > 9)
		ft_putnbr_unsigned(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

/*int main(void)
{
	ft_putnbr_fd(-2147483648, 1);
	return (0);
}*/