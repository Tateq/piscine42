/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:54:27 by tornelas          #+#    #+#             */
/*   Updated: 2023/08/29 17:54:34 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}

/*int		main(void)
{
	int		a = 100;
	int		b = 20;
	ft_ultimate_div_mod(&a, &b);
	printf("%d %d", a, b);
}*/
