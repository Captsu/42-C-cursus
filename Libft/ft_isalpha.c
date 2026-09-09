/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emougeno <emougeno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 16:14:41 by emougeno          #+#    #+#             */
/*   Updated: 2026/09/09 15:26:10 by emougeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
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
		printf("ft = %d et ori = %d ", ft_isalpha(tests[i]), isalpha(tests[i]));
		if ((ft_isalpha(tests[i]) == 0 && isalpha(tests[i]) == 0)
			|| (ft_isalpha(tests[i]) > 0 && isalpha(tests[i]) > 0))
			printf(GREEN "[OK]\n" RESET);
		else
			printf(RED "[KO]\n" RESET);
		i++;
	}
	return (0);
}*/