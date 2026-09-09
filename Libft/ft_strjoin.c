/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emougeno <emougeno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 04:38:37 by emougeno          #+#    #+#             */
/*   Updated: 2026/09/09 05:56:15 by emougeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	dest = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!dest)
		return (NULL);
	ft_memcpy(dest, s1, len1);
	ft_memcpy(dest + len1, s2, len2 + 1);
	return (dest);
}

// int main(void)
// {
// 	char	s1[] = "bonjour ";
// 	char	s2[] = "les amis";
// 	char	*dest;

// 	dest = ft_strjoin(s1, s2);
// 	printf("%s\n", dest);
// 	free(dest);
// 	return (0);
// }