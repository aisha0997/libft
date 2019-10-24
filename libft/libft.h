/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaafia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 15:54:19 by alaafia           #+#    #+#             */
/*   Updated: 2019/10/23 21:13:23 by alaafia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int				ft_atoi(char *str);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprintf(int c);
int				ft_memcmp(const void *str1, const void *str2, size_t n);
int				ft_tolower(int c);
int				ft_toupper(int c);
int				ft_strlen(char *str);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putchar_fd(char c, int fd);
void			*ft_memset(void *str, int c, size_t n);
void			ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t nbr, size_t s);
void			*ft_memccpy(void *str1, const void *str2, int c, size_t n);
void			*ft_memchr(const void *str, int c, size_t n);
void			*ft_memcpy(void *str1, const void *str2, size_t n);
void			*ft_memmove(void *str1, const void *str2, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strdup(const char *src);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strchr(const char *s, int c);
char			*ft_strnstr(const char *s1, const char *s2, size_t n);
char			*ft_strrchr(const char *str, int c);
size_t			ft_strlcpy(char *dst, const char *src, size_t max);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
#endif
