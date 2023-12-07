/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:31:44 by tornelas          #+#    #+#             */
/*   Updated: 2023/12/07 01:06:19 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(src);
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (dest[i] != '\0')
		i++;
	return (len);
}

/*int	main()
{
	char	dest[] = "This is a string.";
	char	src[] = "Another string";

	printf ("String before ft_strlcpy: %s\n", dest);
	ft_strlcpy(dest, src, 18);
	printf ("String after ft_strlcpy: %s\n", dest);
}*/