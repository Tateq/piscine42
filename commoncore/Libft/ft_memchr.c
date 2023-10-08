/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:04:43 by tornelas          #+#    #+#             */
/*   Updated: 2023/10/08 18:01:09 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(char *str, int c, unsigned int n)
{
	int	i;

	i = 0;
	while (n > 0 && str[i] != '\0')
	{
		if (str[i] == c)
		{
			return ((void *)str + i);
		}
		n--;
		i++;
	}
	return (0);
}

/*
int	main()
{
	char	str[] = "ameixa";
	int		c = 'i';
	unsigned int	n;
	n = 5;
	char	*result;
	result = (char *)ft_memchr(str, c, n);
	printf("%s", result);
}*/