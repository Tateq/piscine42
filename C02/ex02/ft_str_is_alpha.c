/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:10:28 by tornelas          #+#    #+#             */
/*   Updated: 2023/08/31 17:19:48 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int		main()
{
	printf("%d\n", (ft_str_is_alpha("abcde")));
	printf("%d\n", (ft_str_is_alpha("ABCDE")));
	printf("%d\n", (ft_str_is_alpha("abcd1")));
	printf("%d\n", (ft_str_is_alpha("-55487_55")));
	printf("%d\n", (ft_str_is_alpha("")));
}*/
