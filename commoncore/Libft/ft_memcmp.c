/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:03:16 by tornelas          #+#    #+#             */
/*   Updated: 2023/10/11 18:36:44 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	s1 = (unsigned char *) str1;
	s2 = (unsigned char *)str2;
	i = 0;
	while (i < n)
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

/*int	main()
{
	char	str[] = "ameixa";
	char	str2[] = "ameoxa";
	int	n = 2;
	int result;

	result = ft_memcmp(str, str2, n);
	if(result > 0)
		printf ("string 1 is bigger than string 2");
	else if(result < 0)
		printf ("string 2 is bigger than string 1");
	else
		printf ("string 1 is equal string 2");
}*/