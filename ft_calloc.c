/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucpardo <lucpardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 21:10:03 by lucpardo          #+#    #+#             */
/*   Updated: 2025/05/03 22:33:36 by lucpardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t	size)
{
	char	*ptr;
	size_t	total;

	if (nmemb == 0 || size == 0)
	{
		ptr = malloc(1);
		if (ptr == NULL)
		{
			return (NULL);
		}
		ft_bzero(ptr, 1);
		return (ptr);
	}
	if (size != 0 && nmemb > (INT_MAX / size))
		return (NULL);
	total = nmemb * size;
	ptr = malloc(total);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_bzero(ptr, total);
	return (ptr);
}
