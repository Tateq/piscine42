// FT_STRTRIM

#include "../libft.h"

int	main()
{
	char const *str = "test string for test";
	char const *set = "test";

	printf ("String before ft_strtrim: %s\n", str);
	printf ("Trimmed string: %s\n", ft_strtrim(str, set));
}