// FT_LSTNEW

#include "../libft.h"

int	main()
{
	char	*str;
	t_list	*elem;

	str = "Hello!";
	elem = ft_lstnew((void *)str);
	printf ("%s\n", (char *)elem->content);
}