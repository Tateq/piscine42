/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:34:35 by tateq             #+#    #+#             */
/*   Updated: 2023/12/07 01:06:57 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	size_t	len;
	size_t	i;

	i = 0;
	if (!s)
		return (ft_strdup(""));
	len = ft_strlen(s);
	new = (char *)malloc(sizeof (char) * (len + 1));
	if (!new)
		return (NULL);
	while (i < len)
	{
		new[i] = (*f)(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

/*char	etoa(unsigned int i, char a)
{
	char e;

	e = 'a';
	if (a == 'e')
		a = e;
	if (a == 'E')
		a == 'A';
}

int	main()
{
	char *str = "Eu estou com fome!";
	
	ft_putendl_fd(ft_strmapi(str, etoa), 1);
}*/