/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:57:47 by tornelas          #+#    #+#             */
/*   Updated: 2023/12/07 00:59:32 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}

/*int	main(int argc, char **argv)
{
	int a;

	if (argc == 2 && !argv[1][1])
	{
		a = argv[1][0];
		if (ft_isalpha(a) == 1)
			printf("%d || The character is an alphabet.\n", ft_isalpha(a));
		else
			printf("%d || The character is not an alphabet.\n", ft_isalpha(a));
	}
	else
		printf ("Segmentation fault\nPlease, input only one character.\n");
}*/