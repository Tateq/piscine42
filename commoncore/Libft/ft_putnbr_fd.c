/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:31:42 by tornelas          #+#    #+#             */
/*   Updated: 2023/12/07 01:03:22 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	a;
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
	{
		a = nb + '0';
		ft_putchar_fd(a, fd);
	}
}

/*int	main()
{
	ft_putnbr_fd(42, 1);
	ft_putendl_fd("", 1);
	ft_putnbr_fd(-42, 1);
	ft_putendl_fd("", 1);
	ft_putnbr_fd(01, 1);
	ft_putendl_fd("", 1);
}*/