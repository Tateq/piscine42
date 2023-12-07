/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tornelas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:51:44 by tateq             #+#    #+#             */
/*   Updated: 2023/12/07 00:57:59 by tornelas         ###   ########.fr       */
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

/*int	main()
{
	char	*str;
	t_list	*elem;

	str = "Hello!";
	elem = ft_lstnew((void *)str);
	printf ("%s\n", (char *)elem->content);
}*/
