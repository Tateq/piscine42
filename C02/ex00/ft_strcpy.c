/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:13:22 by tornelas          #+#    #+#             */
/*   Updated: 2023/09/02 19:21:39 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int		main()
{
	char	strd[] = "abacate";
	char	strs[] = "abobrinha";

	printf ("%s\n", strd);
	ft_strcpy(strd, strs);
	printf ("%s\n", strd);
}*/
