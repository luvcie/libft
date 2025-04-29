/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucpardo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:29:12 by lucpardo          #+#    #+#             */
/*   Updated: 2025/04/29 19:43:06 by lucpardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int		ft_isalnum(int param)
{
	if (ft_isalpha(param) || ft_isdigit(param))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*#include <stdio.h>
int		main(void)
{
	printf("%d \n", ft_isalnum('3'));
	printf("%d \n", ft_isalnum('a'));
	printf("%d \n", ft_isalnum('&'));
	printf("%d \n", ft_isalnum('%'));
	return (0);
}*/
