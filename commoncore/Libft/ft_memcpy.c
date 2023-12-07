/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 22:35:02 by tornelas          #+#    #+#             */
/*   Updated: 2023/12/07 01:01:49 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;

	i = 0;
	if (!dest && !src)
		return (dest);
	while (n > 0)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
		n--;
	}
	return (dest);
}

/*int	main()
{
	char	dest[] = "This is a string";
	char	src[] = "Another string";

	printf ("String before ft_memcpy: %s\n", dest);
	ft_memcpy(dest, src, 17);
	printf ("String after ft_memcpy: %s\n", dest);
}*/