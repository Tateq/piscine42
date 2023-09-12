/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 22:18:22 by tornelas          #+#    #+#             */
/*   Updated: 2023/09/09 23:06:50 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i;
	int	j;

	i = 0;
	j = ac -1;
	if (ac > 1)
	{
		while (j > 0)
		{
			i = 0;
			while (av[j][i] != '\0')
			{
				write (1, &av[j][i], 1);
				i++;
			}
			j--;
			write (1, "\n", 1);
		}
	}
}
