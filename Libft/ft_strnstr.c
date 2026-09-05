/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emougeno <emougeno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 18:02:45 by emougeno          #+#    #+#             */
/*   Updated: 2026/09/05 19:50:10 by emougeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(little) == 0)
		return ((char *) big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] && (i + j < len) && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *) big + i);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	*largestring = "Foo Bar Baz";
// 	const char	*smallstring = "Bar";
// 	char		*ptr;

// 	ptr = ft_strnstr(largestring, smallstring, 3);
// 	if (ptr)
// 		printf("%s\n", ptr);
// 	else
// 		printf("NULL\n");
// 	return (0);
// }