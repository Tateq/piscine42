/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:36:10 by tornelas          #+#    #+#             */
/*   Updated: 2023/12/07 01:08:50 by tornelas         ###   ########.fr       */
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

/*int	main(int argc, char **argv)
{
	const char *str;
	int	c;

	str = argv[1];
	c = *argv[2];
	if (argc > 1)
	{
		printf ("String before ft_strrchr: %s\n", str);
		printf("String after ft_strrchr: %s\n", ft_strrchr(str, c));
	}
}*/