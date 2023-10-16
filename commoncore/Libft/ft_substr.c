/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:49:43 by tornelas          #+#    #+#             */
/*   Updated: 2023/10/11 17:04:12 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	sub = (char *)malloc(sizeof(char) * len + 1);
	i = 0;
	if (!sub)
		return (NULL);
	while (len > 0)
	{
		sub[i] = s[start + i];
		i++;
		len--;
	}
	sub [i] = '\0';
	return (sub);
}

/*int	 main()
{
	char const *s = "Hatsune miku is the best";
	unsigned int start = 12;
	size_t len = 15;

	char *sub = ft_substr(s, start, len);
    printf("%s", sub);
}*/