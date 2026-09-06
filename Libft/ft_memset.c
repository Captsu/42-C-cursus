/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emougeno <emougeno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 17:40:13 by emougeno          #+#    #+#             */
/*   Updated: 2026/09/06 15:57:00 by emougeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *tab, int c, size_t n)
{
	size_t	i;

	if (!tab)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(unsigned char *)(tab + i) = (unsigned char) c;
		i++;
	}
	return (tab);
}
