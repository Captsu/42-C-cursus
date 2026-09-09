/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emougeno <emougeno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 21:32:15 by emougeno          #+#    #+#             */
/*   Updated: 2026/09/09 23:28:22 by emougeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strstart(char const *s1, char const *set)
{
	int	i;
	int	j;
	int start;
	
	i = 0;
	start = 0;
	while (s1[i])
	{
		printf("on entre ici");
		j = 0;
		while (set[j] && s1[i + j] && set[j] == s1[i + j])
				j++;
		if (set[j] == '\0' && s1[i + j])
			start = i + j;
		i++;
	}
	printf("%d", start);
	return (start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	int		i;
	int		j;
	int		start;
	int		end;

	dest = malloc(sizeof(char) * (ft_strlen(s1) - ft_strlen(set) + 1));
	if (!dest)
		return (NULL);
	start = strstart(s1, set);
	i = ft_strlen(s1);
	while (i > 0)
	{
		j = 0;
		while (set[j] && i - j > start)
		{
			if (set[j] == s1[i - j])
				j++;
		}
		i--;
	}
	ft_memmove(dest, s1 + i, end - start);
	dest[end - start] = '\0';
	return (dest);
}

int main(void)
{
	char	s1[] = "Ta grand mere la chauve";
	char	set[] = "grand ";
	char	*dest;

	dest = ft_strtrim(s1, set);
	printf("%s\n", dest);
	free(dest);
	return (0);
}