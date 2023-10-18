/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:52:19 by tornelas          #+#    #+#             */
/*   Updated: 2023/10/18 17:16:44 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*void	f(unsigned int i, char *a)
{
	*a += 2;
}

int	main()
{
	char	str[] = "Batata";

	ft_striteri(str, f);
	ft_putendl_fd(str, 1);


}*/