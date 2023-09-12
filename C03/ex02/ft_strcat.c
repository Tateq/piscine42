/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:58:01 by tornelas          #+#    #+#             */
/*   Updated: 2023/09/06 19:11:57 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main()
{
     char    strs[] = " world c:";
     char    strd[20] = "Hello";

     ft_strcat(strd, strs);
     printf("%s", strd);
}*/
/*int	main(int argc, char *argv[])
{
	if (argc > 1)
		printf ("%s", ft_strcat(argv[1], argv[2]));
	return (0);
}*/
