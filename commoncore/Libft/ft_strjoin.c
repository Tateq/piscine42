/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:23:00 by tornelas          #+#    #+#             */
/*   Updated: 2023/12/07 01:05:40 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*s3;
	char	len;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	s3 = (char *)malloc(sizeof (char) * (len + 1));
	if (!s1 || !s2 || !s3)
		return (NULL);
	while (s1[i] != '\0')
	{
		s3[i] = s1 [i];
		i++;
	}
	while (s2[j] != '\0')
		s3[i++] = s2[j++];
	s3[i] = '\0';
	return (s3);
}

/*int	main()
{
	char const	s1[] = "This string ";
	char const	s2[] = "is concatenated. :o";

	printf ("%s\n", ft_strjoin(s1, s2));
}*/