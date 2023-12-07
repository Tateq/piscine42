/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:12:24 by tornelas          #+#    #+#             */
/*   Updated: 2023/12/06 08:07:12 by tornelas         ###   ########.fr       */
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
	char *str = "teste string teste";
	int	c = 'e';
	
	printf("%s", ft_strchr(str, c));
}*/