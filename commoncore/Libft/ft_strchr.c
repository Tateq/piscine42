/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:12:24 by tornelas          #+#    #+#             */
/*   Updated: 2023/12/07 01:04:34 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str && *str != (unsigned char) c)
	{
		str++;
	}
	if (*str == (unsigned char)c)
		return ((char *)str);
	return (0);
}

/*int	main(int argc, char **argv)
{
	const char *str;
	int	c;

	str = argv[1];
	c = *argv[2];
	if (argc > 1)
	{
		printf ("String before ft_strchr: %s\n", str);
		printf("String after ft_strchr: %s\n", ft_strchr(str, c));
	}
}*/