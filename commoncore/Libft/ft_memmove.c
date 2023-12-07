/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 23:05:00 by tornelas          #+#    #+#             */
/*   Updated: 2023/12/07 01:02:13 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	if (!dest && !src)
		return (dest);
	if (s < d && s + n > d)
	{
		s += n;
		d += n;
		while (n > 0)
		{
			*(--d) = *(--s);
			n--;
		}
	}
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}

/* int	main()
{
	char	dest[] = "This is a string.";
	char	src[] = "Another string";

	printf ("String before ft_memmove: %s\n", dest);
	ft_memmove(dest, src, 18);
	printf ("String after ft_memmove: %s\n", dest);
}*/