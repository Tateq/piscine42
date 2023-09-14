/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:33:28 by tornelas          #+#    #+#             */
/*   Updated: 2023/09/13 17:11:49 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(int ac, char **av)
{
	int	n;
	int	i;

	i = 1;
	while (i < ac - 1)
	{
		n = 1;
		while (n < ac - 1)
		{
			if (ft_strcmp(av[n], av[n + 1]) > 0)
			{
				ft_swap(&av[n], &av[n + 1]);
			}
			n++;
		}
		i++;
	}
	n = 1;
	while (n < ac)
	{
		ft_putstr(av[n]);
		ft_putchar('\n');
		n++;
	}
	return (0);
}
