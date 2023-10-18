<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:41:29 by tornelas          #+#    #+#             */
/*   Updated: 2023/10/18 15:41:29 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	getsize(int n)
{
	size_t	i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		neg;
	int		size;

	neg = 1;
	size = getsize(n);
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		neg *= -1;
		size++;
	}
	str = malloc(size + 1);
	if (!str)
		return (NULL);
	str[size--] = 0;
	while (n != 0)
	{
		str[size--] = n % 10 * neg + 48;
		n /= 10;
	}
	if (size == 0)
		str[0] = '-'; 
	return (str);
}

/*int	main()
{
	int	 n = 42;

	printf ("%s", ft_itoa(n));
}*/
=======
#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;

	if (n < 0)
		ft_putchar_fd("-", 1);
	if ( n >= 0 && n <= 9)
	{
		
	}
}
>>>>>>> 3afaf94eebb6d934f1138f41381bedf245295ccc
