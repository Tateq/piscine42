// FT_SUBSTR

#include "../libft.h"

int	main()
{
	char	str[] = "The original string, and this is the substring.";
	char	*sub;

	sub = ft_substr(str, 25, 30);
	printf ("%s\n", str);
	printf ("%s\n", sub);
}