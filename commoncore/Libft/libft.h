/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:39:50 by tornelas          #+#    #+#             */
/*   Updated: 2023/10/08 21:05:28 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int				ft_isalnum(char a);
int				ft_isalpha(char a);
int				ft_isascii(char a);
int				ft_isdigit(char a);
int				ft_isprint(char a);
char			*ft_strchr(const char *str, int c);
int				ft_strlen(char *str);
int				ft_tolower(int a);
int				ft_toupper(int a);
char			*ft_strrchr(const char *str, int c);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
void			*ft_memset(void *str, int c, size_t n);
void			ft_bzero(void *str, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
void			*ft_memchr(char *str, int c, unsigned int n);
int				ft_memcmp(void *str1, void *str2, int n);
char			*ft_strnstr(char *str, char *find, int size);
char			*ft_strdup(char *str);
int				ft_atoi(char *str);
void			*ft_calloc(int n_elementos, int elemento_tam);
void			*ft_memmove(void *dest, const void *src, size_t n);
