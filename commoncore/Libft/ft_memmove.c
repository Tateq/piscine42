/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 23:05:00 by tornelas          #+#    #+#             */
/*   Updated: 2023/10/08 15:42:19 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
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

/* 
int	main()
{
	char	src[] = "12344448";
	char	dest[] = "67890";


	ft_memmove(dest, src, 7);
	printf ("%s\n", dest);
	memmove(dest, src, 7);
	printf ("%s\n", dest);

}
*/