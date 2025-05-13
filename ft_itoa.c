/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucpardo <lucpardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:06:02 by lucpardo          #+#    #+#             */
/*   Updated: 2025/05/13 16:08:38 by lucpardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	ft_itoa(int nb)
{
	char	c;
	long	nbl;

	nbl = nb;
	if (nbl < 0)
	{
		write(1, "-", 1);
		nbl = -nbl;
	}

	if (nbl > 9)
	ft_itoa(nbl/10);
	c = (nbl % 10) + '0';
	write(1, &c, 1);
	return (nbl);
}

/*#include <stdio.h>
int main(void)
{
	ft_itoa(1024);
	ft_itoa(-1024);
	return (0);
}*/
