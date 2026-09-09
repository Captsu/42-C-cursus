/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emougeno <emougeno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 16:24:47 by emougeno          #+#    #+#             */
/*   Updated: 2026/09/09 15:26:12 by emougeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

int main(void)
{
	char	tests[] = {'a', '0', '.'};
	int i;

	i = 0;
	while (tests[i])
	{
		printf("ft = %d et ori = %d\n", ft_isalnum(tests[i]), isalnum(tests[i]));
		if ((ft_isalnum(tests[i]) == 0 && isalnum(tests[i]) == 0)
			|| (ft_isalnum(tests[i]) > 0 && isalnum(tests[i]) > 0))
			printf(GREEN "[OK]\n" RESET);
		else
			printf(RED "[KO]\n" RESET);
		i++;
	}
	return (0);
}*/