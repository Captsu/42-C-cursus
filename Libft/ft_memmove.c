/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emougeno <emougeno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 21:43:34 by emougeno          #+#    #+#             */
/*   Updated: 2026/09/06 22:16:11 by emougeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	if (dest < src)
	{
		while (i < size)
		{
			*((unsigned char *)dest + i) = *((const unsigned char *)src + i);
			i++;
		}
		return (dest);
	}
	else
	{
		i = size;
		while (i > 0)
		{
			i--;
			*((unsigned char *)dest + i) = *((const unsigned char *)src + i);
		}
		return (dest);
	}
}
