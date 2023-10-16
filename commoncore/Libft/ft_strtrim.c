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
	size_t	i;
	size_t	j;
	char	*strim;
	int		len;

	i = 0;
	j = 0; 
	len = (ft_strlen(s1) - ft_strlen(set));
	strim = (char *)malloc((sizeof (char)) * (len + 1));
	if (!s1 || !set || !strim)
		return (NULL);
	while (s1[i] != '\0')
	{
		if (s1[i] != set[i])
		{
			strim[j] = s1[i];
			
		}
		else if (s1[i] == set[i])
			i++;
		i++;
		j++;
	}
	strim[j] = '\0';
	return (strim);
}

int	main()
{
	char *s1 = "Hatsune Miku is Hatsune";
	char *set = "Hatsune";

	printf("%s", ft_strtrim(s1, set));
}