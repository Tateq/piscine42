/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:44:39 by tornelas          #+#    #+#             */
/*   Updated: 2023/12/07 01:10:42 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int a)
{
	if (a >= 'a' && a <= 'z')
	{
		a -= 32;
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
		printf ("%c\n", ft_toupper(*argv[n]));
		n++;
	}
}*/