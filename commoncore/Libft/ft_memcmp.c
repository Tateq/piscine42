/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:03:16 by tornelas          #+#    #+#             */
/*   Updated: 2023/10/08 18:51:37 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(void *str1, void *str2, int n)
{
	char	*s1;
	char	*s2;
	int		i;

	s1 = str1;
	s2 = str2;
	i = 0;
	while (i < n)
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

/*int	main()
{
	char	str[] = "ameixa";
	char	str2[] = "ameoxa";
	int	n = 2;
	int result;

	result = ft_memcmp(str, str2, n);
	if(result > 0)
		printf ("string 1 is bigger than string 2");
	else if(result < 0)
		printf ("string 2 is bigger than string 1");
	else
		printf ("string 1 is equal string 2");
}*/