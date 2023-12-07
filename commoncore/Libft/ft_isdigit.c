/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:10:50 by tornelas          #+#    #+#             */
/*   Updated: 2023/12/07 00:59:58 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int a)
{
	if (a >= '0' && a <= '9')
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
		if (ft_isdigit(a) == 1)
			printf("%d || The character is an digit.\n", ft_isdigit(a));
		else
			printf("%d || The character is not an digit.\n", ft_isdigit(a));
	}
	else
		printf ("Segmentation fault\nPlease, input only one character.\n");
}*/