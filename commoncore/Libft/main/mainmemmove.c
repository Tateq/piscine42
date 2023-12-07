//FT_MEMMOVE

#include "../libft.h"

int	main()
{
	char	dest[] = "This is a string.";
	char	src[] = "Another string";

	printf ("String before ft_memmove: %s\n", dest);
	ft_memmove(dest, src, 18);
	printf ("String after ft_memmove: %s\n", dest);
}