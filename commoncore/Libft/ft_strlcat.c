/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:57:30 by tornelas          #+#    #+#             */
/*   Updated: 2023/12/07 01:06:01 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	slen;

	i = 0;
	j = 0;
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	while (dest[j] != '\0')
		j++;
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src[i] != '\0' && i < size - dlen - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dlen + slen);
}

/*int	main()
{
	char	dest[50] = "Concatenated";
	char	src[] = " string";

	printf ("String before ft_strlcat: %s\n", dest);
	printf ("ft_strlcat: %ld\n", ft_strlcat(dest, src, 21));
	printf ("String after ft_strlcat: %s\n", dest);
}*/