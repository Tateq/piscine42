/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:39:50 by tornelas          #+#    #+#             */
/*   Updated: 2023/10/16 17:49:09 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int				ft_isalnum(char a);
int				ft_isalpha(char a);
int				ft_isascii(char a);
int				ft_isdigit(char a);
int				ft_isprint(char a);
char			*ft_strchr(const char *str, int c);
size_t			ft_strlen(const char *str);
int				ft_tolower(int a);
int				ft_toupper(int a);
char			*ft_strrchr(const char *str, int c);
int	            ft_strncmp(const char *s1, const char *s2, size_t n);
void			*ft_memset(void *str, int c, size_t n);
void			ft_bzero(void *str, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
size_t	        ft_strlcat(char *dest,const char *src, size_t size);
void	        *ft_memchr(const void *str, int c, size_t n);
int	            ft_memcmp(const void *str1, const void *str2, size_t n);
char	        *ft_strnstr(const char *str, const char *find, size_t size);
char			*ft_strdup(char *str);
int				ft_atoi(const char *str);
void			*ft_calloc(int n_elementos, int elemento_tam);
void			*ft_memmove(void *dest, const void *src, size_t n);
char	        *ft_substr(char const *s, unsigned int start, size_t len);
char            *ft_strjoin(char const *s1, char const *s2);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

#endif