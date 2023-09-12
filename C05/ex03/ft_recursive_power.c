/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 11:17:00 by tornelas          #+#    #+#             */
/*   Updated: 2023/09/10 11:43:57 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;
	int	j;

	i = 1;
	j = nb;
	if (i < power)
	{
		j *= ft_recursive_power(nb, power - 1);
		i++;
	}
	if (power < 0)
		j = 0;
	if (power == 0)
		j = 1;
	return (j);
}

/*#include <stdio.h>
int	main()
{
	printf("%d", ft_recursive_power(10, 3));
}*/

/*#include <stdlib.h>
int	main(int ac, char *av[])
{
	if ( ac > 1)
		printf("%d", ft_recursive_power(atoi(av[1]), atoi(av[2])));
}*/
