/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:39:12 by tornelas          #+#    #+#             */
/*   Updated: 2023/09/10 16:39:28 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	j;

	i = 1;
	j = nb;
	while (i < power)
	{
		j = j * nb;
		i++;
	}
	if (power < 0)
		j = 0;
	if (power == 0)
		j = 1;
	return (j);
}

/* int		main()
{
	printf("%d", ft_iterative_power(2, 0));
}*/
