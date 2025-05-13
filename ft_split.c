/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucpardo <lucpardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 11:08:19 by lucpardo          #+#    #+#             */
/*   Updated: 2025/05/13 15:26:23 by lucpardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_arrays_counter(char *str, char c)
{
	int	i;
	int	j;
	int	new_word;

	i = 0;
	j = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if (str[i] != c && new_word == 1)
		{
			j++;
			new_word = 0;
		}
		else if (str[i] == c)
		{
			new_word = 1;
		}
		i++;
	}
	return (j);
}

char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	char	*dest;
	size_t	inputstrlen;
	size_t	len2dup;

	inputstrlen = ft_strlen(s);

	if (inputstrlen < n)
		len2dup = inputstrlen;
	else
		len2dup = n;
	dest = (char *)malloc(len2dup + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < len2dup)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
}

#include <stdio.h>

int	main(void)
{
	printf("%d \n", ft_arrays_counter("hello world my name is lucy", ' '));
	printf("%d \n", ft_arrays_counter(" hello world my name is lucy", ' '));
	printf("%d \n", ft_arrays_counter(" hello   world my name is lucy", ' '));
	printf("%d \n", ft_arrays_counter("hello world my name is lucy ", ' '));
	return (0);
}
