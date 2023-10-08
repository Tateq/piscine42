/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:10:32 by tornelas          #+#    #+#             */
/*   Updated: 2023/10/08 19:54:50 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *find, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (find[j] == '\0')
		return (str);
	while (i < size)
	{
		while (str[i + j] == find[j] && str[i + j] != '\0')
			j++;
		if (find [j] == '\0')
			return (str + i);
		j = 0;
		i++;
	}
	return (0);
}

/*
int	main()
{
	char str[] = "bom dia";
	char find[] = "dia";
	int size = 2;

	printf ("%s", ft_strnstr(str, find, size));
}*/