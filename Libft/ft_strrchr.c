/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emougeno <emougeno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 00:07:54 by emougeno          #+#    #+#             */
/*   Updated: 2026/09/07 02:27:07 by emougeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	int		count;

	i = 0;
	count = -1;
	while (s[i])
	{
		if (s[i] == (char)c)
			count = i;
		i++;
	}
	if ((char)c == '\0')
		return ((char *)s + i);
	else if (count >= 0)
		return ((char *)s + count);
	return (NULL);
}
