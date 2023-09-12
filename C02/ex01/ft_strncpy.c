/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:22:31 by tornelas          #+#    #+#             */
/*   Updated: 2023/09/02 19:22:10 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int		main()
{
	char	strs[] = "jabuti";
	char	strd[] = "calopsita";

	ft_strncpy(strd, strs, 3);
	printf("%s", strd);
	ft_strncpy(strd, strs, 5);
    printf("\n%s", strd);
	ft_strncpy(strd, strs, 10);
	printf("\n%s", strd);
}*/
