// FT_STRRCHR

#include "../libft.h"

int	main(int argc, char **argv)
{
	const char *str;
	int	c;

	str = argv[1];
	c = *argv[2];
	if (argc > 1)
	{
		printf ("String before ft_strrchr: %s\n", str);
		printf("String after ft_strrchr: %s\n", ft_strrchr(str, c));
	}
}