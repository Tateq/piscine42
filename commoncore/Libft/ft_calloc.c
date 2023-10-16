/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:55:25 by tornelas          #+#    #+#             */
/*   Updated: 2023/10/12 22:11:30 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(int n_elementos, int elemento_tam)
{
	int		total_size;
	char	*ptr;

	total_size = n_elementos * elemento_tam;
	ptr = malloc(total_size);
	if (ptr != 0)
		memset(ptr, 0, total_size);
	return (ptr);
}

/*int	main()
{
	int	nElementos;
	int elementoTam;
	char	*result;

	nElementos = 2;
	elementoTam = 2;
	result = (char *)ft_calloc(nElementos, elementoTam);
	printf("%s", result);
}*/