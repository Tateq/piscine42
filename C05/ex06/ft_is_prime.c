/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:18:33 by tornelas          #+#    #+#             */
/*   Updated: 2023/09/11 21:00:11 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int		n;

	n = 2;
	if (nb < 2)
		return (0);
	while (n <= (nb / n))
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char *av[])
{
	if (ac > 1)
	{
		printf("%d", ft_is_prime(atoi(av[1])));
	}
}*/
