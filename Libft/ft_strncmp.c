/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 19:26:32 by emougeno          #+#    #+#             */
/*   Updated: 2026/09/16 03:20:33 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char s1[], const char s2[], size_t n)
{
	size_t	i;

	if (!s1 || !s2)
		return (0);
	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i == n)
		return ((unsigned char)s1[i - 1] - (unsigned char)s2[i - 1]);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #define GREEN "\033[1;32m"
// #define RED "\033[1;31m"
// #define RESET "\033[0m"

// int main(void)
// {
// 	char	s1[] = "abcd";
// 	char	s2[] = "abcde";
// 	int		size;

// 	size = 5;
// 	printf("ft: %d\n", ft_strncmp(s1, s2, size));
// 	printf("ori: %d\n", strncmp(s1, s2, size));
// 	if (ft_strncmp(s1, s2, size) == strncmp(s1, s2, size))
// 		printf(GREEN "[OK]\n" RESET);
// 	else
// 		printf(RED "[KO]\n" RESET);
// 	return (0);
// }