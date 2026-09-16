/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 21:32:15 by emougeno          #+#    #+#             */
/*   Updated: 2026/09/16 02:49:24 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*dest;

	if (!s1)
		return (NULL);
	start = 0;
	while (s1[start] && !!set && ft_strchr(set, s1[start]) != 0)
		start++;
	end = ft_strlen(s1);
	while (end > start && !!set && ft_strchr(set, s1[end - 1]) != 0)
		end--;
	dest = malloc(sizeof(char) * (end - start + 1));
	if (!dest)
		return (NULL);
	ft_memcpy(dest, s1 + start, end - start);
	dest[end - start] = '\0';
	return (dest);
}

//int main(void)
//{
//	char	s1[] = "Your security is good?";
//	char	set[] = "";
//	char	*dest;

//	dest = ft_strtrim(NULL, NULL);
//	if (!dest)
//		return (-1);
//	printf("%s\n", dest);
//	free(dest);
//	return (0);
//}