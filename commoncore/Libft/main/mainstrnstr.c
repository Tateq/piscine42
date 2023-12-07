// FT_STRNSTR

#include "../libft.h"

int	main()
{
	char	str[] = "Test string for test.";
	char	find[] = "str";

	printf ("String before ft_strnstr: %s\n", str);
	printf ("String after ft_strnstr: %s\n", ft_strnstr(str, find, 22));
}