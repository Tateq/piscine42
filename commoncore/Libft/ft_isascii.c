/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:34:52 by tornelas          #+#    #+#             */
/*   Updated: 2023/12/07 00:59:45 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int a)
{
	if (0 <= a && a <= 127)
	{
		return (1);
	}
	else
		return (0);
}

/*int	main(int argc, char **argv)
{
	int a;

	if (argc == 2 && !argv[1][1])
	{
		a = argv[1][0];
		if (ft_isascii(a) == 1)
			printf("%d || The character is from the ASCII table.\n", ft_isascii(a));
		else
			printf("%d || The character is not from the ASCII table.\n", ft_isascii(a));
	}
	else
		printf ("Segmentation fault\nPlease, input only one character.\n");
}*/