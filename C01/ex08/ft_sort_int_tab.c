/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:12:29 by tornelas          #+#    #+#             */
/*   Updated: 2023/08/31 12:48:56 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		if (tab [i] > tab [i + 1])
		{
			temp = tab [i];
			tab [i] = tab [i + 1];
			tab [i + 1] = temp;
			ft_sort_int_tab(tab, size);
		}
		i++;
	}
}

/*int	main()
{
	int	array[6] = {3, 4, 6, 1, 2, 5};
	int s = 6;
	int i = 0;

	ft_sort_int_tab(array, s);
	while (i < s)
	{
		printf("%d", array[i]);
		i++;
	}
}*/
