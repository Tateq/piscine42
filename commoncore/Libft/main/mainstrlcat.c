//FT_STRLCAT

#include "../libft.h"

int	main()
{
	char	dest[50] = "Concatenated";
	char	src[] = " string";

	printf ("String before ft_strlcat: %s\n", dest);
	printf ("ft_strlcat: %ld\n", ft_strlcat(dest, src, 21));
	printf ("String after ft_strlcat: %s\n", dest);
}