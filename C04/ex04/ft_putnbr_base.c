/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:24:49 by tornelas          #+#    #+#             */
/*   Updated: 2023/09/09 18:48:13 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	checker(char *str)
{
	int	i;
	int	j;
	int	s;

	i = 0;
	s = ft_strlen(str);
	if (str[0] == '\0' || s == 1)
	{
		return (0);
	}
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == '-' || str[i] == '+')
		{
			return (0);
		}
		j = i + 1;
		while (j < ft_strlen(str))
		{
			if (str[j] == str[i])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	s;
	int	e;
	int	nb;

	e = checker(base);
	s = ft_strlen(base);
	nb = nbr;
	if (e == 1)
	{
		if (nb < 0)
		{
			nb *= -1;
			ft_putchar('-');
		}
		if (nb < s)
		{
			ft_putchar(base[nb]);
		}
		if (nb >= s)
		{
			ft_putnbr_base(nb / s, base);
			ft_putnbr_base(nb % s, base);
		}
	}
}

/*int	main()
{
	ft_putnbr_base(85, "01");
}*/

