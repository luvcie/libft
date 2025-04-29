/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucpardo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:29:12 by lucpardo          #+#    #+#             */
/*   Updated: 2025/04/28 19:01:13 by lucpardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int param)
{
	if ((param >= 'a' && param <= 'z') || (param >= 'A' && param <= 'Z'))
	{
		return (1);
	}	
	else if (param >= '0' && param <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d \n", ft_isalnum('3'));
	printf("%d \n", ft_isalnum('a'));
	printf("%d \n", ft_isalnum('&'));
	printf("%d \n", ft_isalnum('%'));
	return (0);
}*/
