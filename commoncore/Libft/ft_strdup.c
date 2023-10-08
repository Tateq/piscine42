/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 20:29:02 by tornelas          #+#    #+#             */
/*   Updated: 2023/10/08 20:37:05 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str);

char	*ft_strdup(char *str)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(ft_strlen(str) * sizeof(char) + 1);
	if (dest == NULL)
		return (0);
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main(void)
{
    char str[] = "abacate";

    printf("%s", ft_strdup(str));
    return (0);
}*/