/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:21:20 by tornelas          #+#    #+#             */
/*   Updated: 2023/12/07 00:59:15 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')
		|| (a >= '0' && a <= '9'))
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
		if (ft_isalnum(a) == 1)
			printf("%d || The character is an alphanumeric.\n", ft_isalnum(a));
		else
			printf("%d || The character is not an alphanumeric.\n", ft_isalnum(a));
	}
	else
		printf ("Segmentation fault\nPlease, input only one character.\n");
}*/