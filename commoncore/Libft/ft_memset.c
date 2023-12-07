/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 21:40:32 by tornelas          #+#    #+#             */
/*   Updated: 2023/12/07 01:02:26 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*s;

	i = 0;
	s = (char *)str;
	while (i < n)
	{
		s[i] = c;
		i++;
	}
	return (s);
}

/*int main()
{
	char	str[] = "This is a string.";
	char	c;

	c = '0';
	printf ("String before ft_memset: %s\n", str);
	ft_memset(str, c, 18);
	printf ("String after ft_memset: %s\n", str);
}*/