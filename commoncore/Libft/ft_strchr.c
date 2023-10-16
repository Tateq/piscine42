/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:12:24 by tornelas          #+#    #+#             */
/*   Updated: 2023/10/12 22:22:39 by tornelas         ###   ########.fr       */
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

/*int	main()
{
	char *str = "Batatinha quando nasce espalha a rama pelo chao.";
	int	c = 's';
	
	printf("%s", ft_strchr(str, c));
}*/