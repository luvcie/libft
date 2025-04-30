/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucpardo <lucpardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:44:31 by lucpardo          #+#    #+#             */
/*   Updated: 2025/04/30 18:23:06 by lucpardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	
	if (big == NULL || little == NULL)
	{
		return (NULL);
	}
	if (len == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < len && big[i] != '\0')
	{
		ft_strncmp(big, little, len)
	}
	return (NULL);
}
