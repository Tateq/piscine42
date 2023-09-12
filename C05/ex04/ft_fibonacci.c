/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 12:21:09 by tornelas          #+#    #+#             */
/*   Updated: 2023/09/10 12:43:16 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return ((ft_fibonacci(index - 1)) + (ft_fibonacci(index - 2)));
}

/*#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char *av[])
{
	if (ac > 1)
	{
		printf("%d", ft_fibonacci(atoi(av[1])));
	}
}*/
