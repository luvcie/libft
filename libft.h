/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucpardo <lucpardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:47:40 by lucpardo          #+#    #+#             */
/*   Updated: 2025/05/02 17:31:13 by lucpardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

# include <strings.h>
# include <stdlib.h>

int		ft_isalpha(int letter);
int		ft_isdigit(int digit);
int		ft_isalnum(int param);
int		ft_isascii(int ascii);
int		ft_isprint(int value);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strnstr(const char	*big, const char *little, size_t len);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcpy(char	*dst, const char *src, size_t size);
size_t	ft_strlcat(char	*dst, const char *src, size_t size);
int	ft_atoi(const char *str);
char	*ft_strdup(const char	*s);
void	*ft_memset(void *s, int c, size_t n);

#endif
