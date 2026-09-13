/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 14:30:20 by elise             #+#    #+#             */
/*   Updated: 2026/09/12 14:45:21 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	new->next = NULL;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (*lst != NULL)
		*lst = (*lst)->next;
	(*lst)->next = new;
}
