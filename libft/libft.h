/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 23:40:44 by aymaatou          #+#    #+#             */
/*   Updated: 2019/10/23 20:06:25 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int				ft_atoi(char *str);
void			*ft_bzero(void *b, size_t len);
void			*ft_calloc(size_t count, size_t size);
int				ft_isalnum(char str);
int				ft_isalpha(char str);
int				ft_isascii(int c);
int				ft_isdigit(char str);
int				ft_isprint(char c);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, void *src, size_t n);
void			*ft_memset(void *b, int c, size_t len);
char			*ft_strchr(const char *str, int c);
char			*ft_strdup(const char *s1);
unsigned long	ft_strlcat(char *dst, const char *src, size_t size);
unsigned long	ft_strlcpy(char *dst, const char *src, size_t size);
size_t			ft_strlen(const char *str);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strnstr(char *str, char *to_find, unsigned int n);
char			*ft_strrchr(const char *str, int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);

#endif
