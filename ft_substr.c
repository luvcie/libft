/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucpardo <lucpardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 02:48:41 by lucpardo          #+#    #+#             */
/*   Updated: 2025/05/04 23:54:55 by lucpardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*ft_alloc_empty_str(void)
{
	char	*ptr;

	ptr = malloc(1);
	if (ptr == NULL)
		return (NULL);
	ptr[0] = '\0';
	return (ptr);
}

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	slen;

	if (str == NULL)
		return (NULL);
	slen = ft_strlen(str);
	if (start >= slen)
		return (ft_alloc_empty_str());
	if (len > slen - start)
		len = slen - start;
	ptr = malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = str[start + i];
		i++;
	}
	ptr[len] = '\0';
	return (ptr);
}
