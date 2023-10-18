/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:56:49 by tornelas          #+#    #+#             */
/*   Updated: 2023/10/16 19:45:26 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*strim;

	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1) - 1;
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[end] && ft_strchr(set, s1[end]))
		end--;
	strim = ft_substr(s1, start, end - start + 1);
	return (strim);
}

/*int	main()
{
	char *s1 = "  Hatsune Miku is Hatsune Miku ";
	char *set = " ";

	printf("%s", ft_strtrim(s1, set));
}*/