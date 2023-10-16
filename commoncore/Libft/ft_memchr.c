/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:04:43 by tornelas          #+#    #+#             */
/*   Updated: 2023/10/11 18:29:22 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;

	s = (unsigned char *)str;
	i = 0;
	while (n > i)
	{
		if (s[i] == (unsigned char)c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}

/*int	main()
{
	char	str[] = "ameixa";franci
	int		c = 'i';
	unsigned int	n;
	n = 5;
	char	*result;
	result = (char *)ft_memchr(str, c, n);
	printf("%s", result);
}*/