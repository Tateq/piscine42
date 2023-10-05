/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 23:05:00 by tornelas          #+#    #+#             */
/*   Updated: 2023/10/06 00:03:14 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *d = (char *)dest;
	const char *s = (const char *)src;
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
	else
	{
		while (n > 0)
		{
			*d++ = *s++;
			n--;
		}
	}
	return (dest);
}

/* check
int	main()
{
	char	src[] = "123";
	char	dest[] = "67890";


	ft_memmove(dest, src, 2);
	printf ("%s\n", dest);
	memmove(dest, src, 2);
	printf ("%s\n", dest);

}*/