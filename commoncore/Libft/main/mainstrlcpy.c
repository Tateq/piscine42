// FT_STRLCPY

#include "../libft.h"

int	main()
{
	char	dest[] = "This is a string.";
	char	src[] = "Another string";

	printf ("String before ft_strlcpy: %s\n", dest);
	ft_strlcpy(dest, src, 18);
	printf ("String after ft_strlcpy: %s\n", dest);
}