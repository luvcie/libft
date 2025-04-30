/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucpardo <lucpardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 00:53:15 by lucpardo          #+#    #+#             */
/*   Updated: 2025/04/30 02:03:06 by lucpardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		++i;
	}

	i = - 1;
	while (c != '\0')
	{
		if (str[i] == c)
		{
			return((char *)str + i);
		}
		i--;	
	}	

	if (str[i] == '\0' && c != '\0')
	{
		return (NULL);
	}

	if (str[i] == '\0' && c == '\0')
	{
		return ((char *)str + i);	
	}

	return (NULL);
}

int		main(void)
{
	printf("%s \n", ft_strrchr("banana", 'a'));
	printf("%s \n", ft_strrchr("ukelele", 'e'));
	return (0);
}
