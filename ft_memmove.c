/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucpardo <lucpardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 18:46:51 by lucpardo          #+#    #+#             */
/*   Updated: 2025/05/03 20:20:05 by lucpardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*dstptr;
	const unsigned char	*srcptr;
	size_t				i;

	dstptr = (unsigned char *)dst;
	srcptr = (const unsigned char *)src;
	if (dstptr > srcptr)
	{
		i = n;
		while (i > 0)
		{
			i--;
			dstptr[i] = srcptr[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dstptr[i] = srcptr[i];
			i++;
		}
	}
	return (dst);
}
/*#include <stdio.h>
int	main(void)
{
	char	src[] = "hewwowworld";
	char	dst[20];
	size_t	bytes;

	bytes = ft_strlen(src) + 1;

	ft_memmove(dst, src, bytes);
	printf("%s \n", dst);
	return (0);
}*/
