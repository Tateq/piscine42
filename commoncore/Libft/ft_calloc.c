/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:55:25 by tornelas          #+#    #+#             */
/*   Updated: 2023/12/07 01:25:07 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	size_t		total_size;
	char		*ptr;

	total_size = n * size;
	ptr = malloc(total_size);
	if (ptr != 0)
		ft_memset(ptr, 0, total_size);
	return (ptr);
}
