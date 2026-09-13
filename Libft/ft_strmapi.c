/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 15:30:55 by elise             #+#    #+#             */
/*   Updated: 2026/09/12 00:32:12 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	str = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*char	testf(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (c - 32);
	return (c);
}

#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

int main(void)
{
	char test[] = "test";
	char *dest;

	dest = ft_strmapi(test, testf);
	printf("%s\n", dest);
	return (0);
}*/