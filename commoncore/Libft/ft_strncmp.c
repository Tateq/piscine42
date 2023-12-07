/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 21:34:11 by tornelas          #+#    #+#             */
/*   Updated: 2023/12/07 01:07:59 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}

/*int	main(int argc, char **argv)
{
	const char *s1;
	const char *s2;
	size_t n;

	s1 = argv[1];
	s2 = argv[2];
	n = *argv[3];
	if (argc == 4)
	{
		if (ft_strncmp(s1, s2, n) == 0)
			printf ("%d || The strings are equal.\n", ft_strncmp(s1, s2, n));
		else
			printf ("%d || The strings are different.\n", ft_strncmp(s1, s2, n));
	}
}*/