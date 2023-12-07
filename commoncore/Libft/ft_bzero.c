/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 22:15:19 by tornelas          #+#    #+#             */
/*   Updated: 2023/12/07 00:58:48 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		((char *)str)[i] = 0;
		i++;
		n--;
	}
}

/*int main(int argc, char **argv)
{
    if (argc == 3) 
	{
        char *str = argv[1];
    	size_t size = ft_atoi(argv[2]);

    	ft_putstr_fd ("String before ft_bzero: ", 1);
		ft_putendl_fd (str, 1);
   		ft_bzero(str, size);
    	ft_putstr_fd ("String after ft_bzero: ", 1);
		ft_putendl_fd (str, 1);
    }
	else 
		ft_putendl_fd("ERROR\nValid input: <string> <size>", 1);  
}*/