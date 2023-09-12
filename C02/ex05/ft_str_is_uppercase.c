/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 20:53:06 by tornelas          #+#    #+#             */
/*   Updated: 2023/09/02 19:23:56 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main()
{
	printf("%d\n", ft_str_is_uppercase("AVGBVCBVCB"));
	printf("%d\n", ft_str_is_uppercase("sfhdsghfgdshfd"));
	printf("%d\n", ft_str_is_uppercase("2123155"));
	printf("%d\n", ft_str_is_uppercase(""));
}*/
