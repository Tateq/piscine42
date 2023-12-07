// FT_MEMCHR

#include "../libft.h"

int	main()
{
	char	str[] = "String for test";
	char	*result;
	int		c;
	size_t	n;

	c = 'f';
	n = sizeof str;
	printf ("String before ft_memchr: %s\n", str);
	result = (char*)ft_memchr(str, c, n);
	printf ("String after ft_memchr: %s\n", result);
}