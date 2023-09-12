/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 12:44:01 by tornelas          #+#    #+#             */
/*   Updated: 2023/09/10 20:38:18 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	while ((n * n < nb) && n <= 46340)
	{
		n++;
	}
	if (n * n == nb)
		return (n);
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char *av[])
{
	if (ac > 1)
	{
		printf("%d", ft_sqrt(atoi(av[1])));
	}
}*/
