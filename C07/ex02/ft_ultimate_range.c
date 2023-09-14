/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:18:04 by tornelas          #+#    #+#             */
/*   Updated: 2023/09/13 22:21:39 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	bound;

	i = 0;
	bound = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * bound);
	if (*range == NULL )
	{
		return (-1);
	}
	while (i < bound)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (bound);
}

/*int	main(void)
{
	int	*range = NULL;
	int	min = 3;
	int	max = 10;
	int	gap = max - min;
	int	i = 0;
	int	size = ft_ultimate_range(&range, min, max);

	printf("%d\n", size);

	while(i < gap)
	{
		printf("%d ", range[i]);
		i++;
	}
	return (0);
}*/
