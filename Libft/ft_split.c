/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 15:49:05 by emougeno          #+#    #+#             */
/*   Updated: 2026/09/15 17:23:35 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcount(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static void	free_tab(char **tab, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

static char	*get_word(char const *s, int start, int end)
{
	char	*word;
	int		i;
	int		len;

	len = end - start;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end && s[start])
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static char	**split_helper(char **tab, char const *s, char c, int wc)
{
	int		start;
	int		j;
	int		i;

	j = 0;
	i = 0;
	while (j < wc)
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		tab[j] = get_word(s, start, i);
		if (!tab[j])
		{
			free_tab(tab, j);
			return (NULL);
		}
		j++;
	}
	tab[j] = 0;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		wc;

	wc = wordcount(s, c);
	tab = malloc(sizeof(char *) * (wc + 1));
	if (!tab)
		return (NULL);
	tab = split_helper(tab, s, c, wc);
	return (tab);
}

/*int main(void)
{
	char **tab;
	char test[] = ",we,,qwe,  eqw,,qwe,,";
	char c;
	int	i;

	c = ',';
	tab = ft_split(test, c);
	i = 0;
	while (tab[i])
		printf("%s\n", tab[i++]);
	free(tab);
	return (0);
}*/