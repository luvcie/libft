/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucpardo <lucpardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:06:02 by lucpardo          #+#    #+#             */
/*   Updated: 2025/05/13 16:34:19 by lucpardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_sign(char *str, long *nbl)
{
	if (*nbl == 0)
		str[0] = '0';
	if (*nbl < 0)
	{
		str[0] = '-';
		*nbl = -*nbl;
		return (1);
	}
	return (0);
}

char	*ft_itoa(int nb)
{
	long	nbl;
	size_t	i;
	size_t	extract;
	int		valid_digits;
	char	str[12];

	nbl = nb;
	valid_digits = 0;
	extract = 1000000000;
	ft_bzero(str, 12);
	i = ft_sign(str, &nbl);
	while (extract != 0)
	{
		if (nbl / extract != 0 || valid_digits != 0)
		{
			str[i++] = (nbl / extract) + '0';
			valid_digits++;
		}
		nbl %= extract;
		extract /= 10;
	}
	return (ft_strdup(str));
}
/*))#include <stdio.h>
int main(void)
{
	printf("%s\n", ft_itoa(1024));
	printf("%s\n", ft_itoa(-1024));
	printf("%s\n", ft_itoa(INT_MAX));
	printf("%s\n", ft_itoa(INT_MIN));
	return (0);
}*/
