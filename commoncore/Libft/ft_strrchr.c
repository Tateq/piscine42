/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:36:10 by tornelas          #+#    #+#             */
/*   Updated: 2023/12/06 08:07:40 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == (unsigned char)c)
		{
			return ((char *)&str[i]);
		}
		i--;
	}
	return (0);
}

/*int	main()
{
	char *str = "teste string teste";
	int	c = 's';
	
	printf("%s", ft_strrchr(str, c));
}*/