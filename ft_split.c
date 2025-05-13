/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucpardo <lucpardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 11:08:19 by lucpardo          #+#    #+#             */
/*   Updated: 2025/05/13 22:30:00 by lucpardo         ###   ########.fr       */
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
	dest[i] = '\0';
	return (dest);
}

static int	ft_next_word(char **slot, const char **i, char c)
{
	const char	*ptr;
	size_t		len;

	while (**i != '\0' && **i == c)
		(*i)++;
	ptr = *i;
	while (**i != '\0' && **i != c)
		(*i)++;
	len = (size_t)(*i - ptr);
	*slot = ft_strndup(ptr, len);
	if (*slot == NULL)
		return (0);
	return (1);
}

static void	ft_free(char **array_of_arrays, size_t words_nbr)
{
	size_t	i;

	i = 0;
	if (array_of_arrays == NULL)
		return ;
	while (i < words_nbr)
	{
		free(array_of_arrays[i]);
		i++;
	}
	free(array_of_arrays);
}

char	**ft_split(char const *s, char c)
{
	char		**result;
	size_t		words;
	size_t		i;
	const char	*j;

	if (s == NULL)
		return (NULL);
	words = ft_arrays_counter((char *)s, c);
	result = (char **)malloc((words + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	j = s;
	i = 0;
	while (i < words)
	{
		if (!ft_next_word(&result[i], &j, c))
		{
			ft_free(result, i);
			return (NULL);
		}
		i++;
	}
	result[words] = NULL;
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d \n", ft_arrays_counter("hello world my name is lucy", ' '));
	printf("%d \n", ft_arrays_counter(" hello world my name is lucy", ' '));
	printf("%d \n", ft_arrays_counter(" hello   world my name is lucy", ' '));
	printf("%d \n", ft_arrays_counter("hello world my name is lucy ", ' '));
	printf("%d \n", ft_arrays_counter("hello world my name is lucy", ' '));
	return(0);
}*/
