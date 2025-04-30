/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucpardo <lucpardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:47:40 by lucpardo          #+#    #+#             */
/*   Updated: 2025/04/30 11:31:21 by lucpardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <strings.h>

int		ft_isalpha(int letter);
int		ft_isdigit(int digit);
int		ft_isalnum(int param);
int		ft_isascii(int ascii);
int		ft_isprint(int value);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);

#endif
