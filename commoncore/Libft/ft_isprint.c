/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:35:32 by tornelas          #+#    #+#             */
/*   Updated: 2023/12/07 01:00:15 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int a)
{
	if (a >= 32 && a <= 126)
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
		if (ft_isprint(a) == 1)
			printf("%d || The character is printable.\n", ft_isprint(a));
		else
			printf("%d || The character is not printable.\n", ft_isprint(a));
	}
	else
		printf ("Segmentation fault\nPlease, input only one character.\n");
}*/