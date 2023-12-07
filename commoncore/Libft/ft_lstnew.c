/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:51:44 by tateq             #+#    #+#             */
/*   Updated: 2023/11/22 16:16:24 by tornelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
	{
		return (NULL);
	}
	new -> content = content;
	new -> next = NULL;
	return (new);
}

/*int	main (void)
{
	char	*str;
	
	t_list	*elem;
	str = (char *)malloc(6*sizeof (char));
	str = "HELLO";
	elem =ft_lstnew((void *)str);
	printf ("%s\n", (char *)elem->content);
}*/
