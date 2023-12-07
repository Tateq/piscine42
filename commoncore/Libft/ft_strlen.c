/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:38:01 by tornelas          #+#    #+#             */
/*   Updated: 2023/12/07 01:06:39 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int	main(int argc, char **argv)
{
    int	n;

	n = 1; 
	if (argc == 1)
        printf ("Please, input a string.\n");
    while (argv[n])
	{
		printf ("The length of the string is: %ld\n", ft_strlen(argv[n]));
		n++;
	}
}*/