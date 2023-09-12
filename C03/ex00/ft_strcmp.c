/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:48:45 by tornelas          #+#    #+#             */
/*   Updated: 2023/09/06 17:34:45 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main()
{
	char	str1[] = "kalopsita";
	char	str2[] = "calopsita";

	printf("%d", ft_strcmp(str1, str2));
}*/

/*int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("%d", ft_strcmp(argv[1], argv[2]));
	}
}*/
