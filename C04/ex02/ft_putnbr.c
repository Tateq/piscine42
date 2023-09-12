/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:03:04 by tornelas          #+#    #+#             */
/*   Updated: 2023/09/07 14:44:38 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	a;
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		a = n + '0';
		ft_putchar(a);
	}
}

/*int	main()
{
	ft_putnbr(42);
	write (1 , "\n", 1);
	ft_putnbr(-42);
	write (1 , "\n", 1);
	ft_putnbr(2);
	write (1 , "\n", 1);
	ft_putnbr(-2);
}*/
