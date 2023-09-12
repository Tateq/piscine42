/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:31:17 by tornelas          #+#    #+#             */
/*   Updated: 2023/08/30 17:57:17 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_rev_int_tab(int	*tab, int size)
{
	int		i;
	int		temp;

	i = 0;
	temp = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

/*int	main(void)
{
	int		s;
	int		array[6] = {1, 2, 3, 4, 5, 6};
	int i = 0;

	s = 6;
	ft_rev_int_tab(array, s);
	while (i < s)
	{
		printf("%d", array[i]);
		i++;
	}
}*/
