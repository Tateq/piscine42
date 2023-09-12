/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 20:17:06 by tornelas          #+#    #+#             */
/*   Updated: 2023/09/02 19:26:26 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main()
{
	printf("%d\n", ft_str_is_lowercase("abcdef"));
	printf("%d\n", ft_str_is_lowercase("abcDDDD"));
	printf("%d\n", ft_str_is_lowercase("122645"));
	printf("%d\n", ft_str_is_lowercase(""));
}*/
