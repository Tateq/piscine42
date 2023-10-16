/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:10:32 by tornelas          #+#    #+#             */
/*   Updated: 2023/10/12 21:59:21 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*find == '\0')
		return ((char *)str);
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (str[i + j] != '\0' && str [i + j] == find[j] && i + j < len)
			j++;
		if (find[j] == '\0')
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}

/*int	main()
{
	char str[] = "acdegf abc";
	char find[] = "abc";
	int size = 15;

	printf ("%s", ft_strnstr(str, find, size));
}*/