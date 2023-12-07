/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:04:43 by tornelas          #+#    #+#             */
/*   Updated: 2023/12/07 01:00:58 by tornelas         ###   ########.fr       */
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
	char	str[] = "String for test";
	char	*result;
	int		c;
	size_t	n;

	c = 'f';
	n = sizeof str;
	printf ("String before ft_memchr: %s\n", str);
	result = (char*)ft_memchr(str, c, n);
	printf ("String after ft_memchr: %s\n", result);
}*/