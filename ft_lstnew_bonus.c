/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucpardo <lucpardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:08:58 by lucpardo          #+#    #+#             */
/*   Updated: 2025/05/06 18:39:19 by lucpardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = malloc(sizeof(t_list));
	if (element == NULL)
		return (NULL);
	element -> next = NULL;
	element -> content = content;
	return (element);
}
/*)#include <stdio.h>
int main(void)
{
	printf("%p \n", ft_lstnew("linked")->content, ft_lstnew("lists!")->next);
}*/
