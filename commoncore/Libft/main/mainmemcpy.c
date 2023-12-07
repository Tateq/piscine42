// FT_MEMCPY

#include "../libft.h"

int	main()
{
	char	dest[] = "This is a string";
	char	src[] = "Another string";

	printf ("String before ft_memcpy: %s\n", dest);
	ft_memcpy(dest, src, 17);
	printf ("String after ft_memcpy: %s\n", dest);
}