/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbahraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 10:26:56 by cbahraou          #+#    #+#             */
/*   Updated: 2022/02/23 21:57:20 by cbahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
 
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

size_t	ft_strlen(const char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *s1, const void *s2, size_t n);
char	*ft_strdup(const char *src);
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f) (unsigned int, char*));
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
int		ft_isalpha(int ch);
int		ft_isdigit(int ch);
int		ft_isalnum(int ch);
int		ft_isascii(int ch);
void	*ft_memset(void *str, int value, size_t count);
void	*ft_memmove(void *dest, const void *src, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_toupper(int ch);
int		ft_tolower(int arg);
char	*ft_strchr(const char *string, int c);
char	*ft_strrchr(const char *string, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(char *str);
void	*ft_calloc(size_t num, size_t size);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
int		ft_memchr(const void *str, int c, size_t n);
int		ft_isprint(int ch);

#endif
