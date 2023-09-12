/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:10:19 by tornelas          #+#    #+#             */
/*   Updated: 2023/09/10 19:54:30 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_prime(int nb)
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

int	ft_find_next_prime(int nb)
{
	if (ft_prime(nb) == 1)
		return (nb);
	return (ft_find_next_prime(nb + 1));
}

/*#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char *av[])
{
	if (ac > 1)
		printf("%d", ft_find_next_prime(atoi(av[1])));
}*/
