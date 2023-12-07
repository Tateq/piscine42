/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:35:53 by tornelas          #+#    #+#             */
/*   Updated: 2023/12/07 01:10:27 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int a)
{
	if (a >= 'A' && a <= 'Z')
	{
		a += 32;
		return (a);
	}
	else
		return (a);
}

/*int	main(int argc, char **argv)
{
	int	n;

	n = 1;
	if (argc == 1)
		printf ("Please, input a character.");
	while (argv[n])
	{
		printf ("%c\n", ft_tolower(*argv[n]));
		n++;
	}
}*/