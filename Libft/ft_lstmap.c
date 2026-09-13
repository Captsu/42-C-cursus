/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 16:35:23 by elise             #+#    #+#             */
/*   Updated: 2026/09/13 21:07:27 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_content;

	new_lst = NULL;
	while (lst)
	{
		f(lst->content);
		new_content = ft_lstnew(lst->content);
		if (!new_content)
		{
			ft_lstclear(new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(new_lst, new_content);
		lst = lst->next;
	}
	return (new_content);
}
