/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 21:29:03 by tornelas          #+#    #+#             */
/*   Updated: 2023/09/13 22:23:06 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	int	l;

	l = ft_strlen(dest);
	while (*src != '\0')
	{
		dest[l] = *src;
		l++;
		src++;
	}
	dest[l] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		totallen;
	int		i;
	int		j;
	char	*result;

	totallen = 0;
	i = 0;
	j = -1;
	result = 0;
	if (size == 0)
		return (*strs);
	while (i < size)
		totallen += ft_strlen(strs[i++]);
	totallen += ft_strlen(sep) * (size - 1);
	i = 0;
	result = malloc(sizeof(char) * (totallen + 1));
	*result = '\0';
	while (j++ < size)
	{
		ft_strcat(result, strs[i++]);
		if (j + 1 != size)
			ft_strcat(result, sep);
	}
	result[totallen] = '\0';
	return (result);
}
/*
int	main(void)
{
	char	*strs[4] = {"tres", "pratos", "de", "trigo"};
	char	*sep;
	int		size;
	char	*res;

	sep = " ";
	size = 4;
	res = ft_strjoin(size, strs, sep);
	printf("%s %d\n", res, ft_strlen(res));
	return (0);
}
*/
