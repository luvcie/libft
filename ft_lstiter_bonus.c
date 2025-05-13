/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucpardo <lucpardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 23:57:05 by lucpardo          #+#    #+#             */
/*   Updated: 2025/05/13 22:38:39 by lucpardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*node;

	if (lst == NULL || f == NULL)
		return ;
	node = lst;
	while (node != NULL)
	{
		f(node->content);
		node = node->next;
	}
}
// iterates through list 'lst' and applies function f
// to content of each node.
// lst: address of pointer to a node
// f: address of function to apply to each node's content
