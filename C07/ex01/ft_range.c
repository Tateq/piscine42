/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:19:15 by tornelas          #+#    #+#             */
/*   Updated: 2023/09/12 16:20:49 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*rst;
	int	range;

	range = max - min;
	i = 0;
	rst = (int *) malloc(sizeof(int) * range);
	if (rst == NULL || min >= max)
		return (NULL);
	while (i < range)
	{
		rst[i] = min + i;
		i++;
	}
	return (rst);
}
/*
#include <stdio.h>
int main(int ac, char *av[])
{
	int i;
	int *array;
	int range;

	i = 0;
	range = atoi(av[2]) - atoi(av[1]);
	if (ac == 3)
	{
		array = ft_range(atoi(av[1]), atoi(av[2]));
		while (i < range)
		{
			 printf("%i", array[i]);
			 printf("%c", ' ');
			 i++;
		}
	}
}
*/
