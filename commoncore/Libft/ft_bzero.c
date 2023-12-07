/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 22:15:19 by tornelas          #+#    #+#             */
/*   Updated: 2023/12/05 21:43:14 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		((char *)str)[i] = 0;
		i++;
		n--;
	}
}

/*int	main()
{
	char *str = "test test test";
	size_t i = 0;
	ft_bzero(str, i);
	printf("%s", str);
}*/