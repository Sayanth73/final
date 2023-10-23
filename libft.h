/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshanmug <sshanmug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:39:32 by sshanmug          #+#    #+#             */
/*   Updated: 2023/10/23 15:39:34 by sshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

/* fonction de la libc */
char		*ft_strrchr(const char *s, int c);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
void		*ft_calloc(size_t count, size_t size);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		ft_putnbr_fd(int n, int fd);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_atoi(const char *str);
void		ft_putchar_fd(char c, int fd);
void		ft_bzero(void *s, size_t n);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
char		*ft_strdup(const char *s1);
char		*ft_strchr(const char *s, int c);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memset(void *b, int c, size_t len);
size_t		ft_strlen(const char *s);
void		*ft_memchr(const void *s, int c, size_t n);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_itoa(int n);
#endif