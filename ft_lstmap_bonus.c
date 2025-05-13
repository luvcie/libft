/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucpardo <lucpardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 22:44:04 by lucpardo          #+#    #+#             */
/*   Updated: 2025/05/13 22:46:31 by lucpardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{

}
// iterates through list 'lst', applies function 'f'
// to each node's content. And creates a new list resulting
// of the successive applications of function 'f'. 'del' function
// is used to delete the content of a node if needed.
// 
// lst: address of pointer to node
// f: address of function applied to each node's content
// del: address of the function used to delete a node's content
// if needed.
