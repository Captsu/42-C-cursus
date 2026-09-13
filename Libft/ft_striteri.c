/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 22:25:06 by elise             #+#    #+#             */
/*   Updated: 2026/09/12 00:30:13 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

void	testf(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = *c - 32;
}
int main(void)
{
	char test[] = "test";
	ft_striteri(test, testf);
	printf("%s\n", test);
	return (0);
}*/
