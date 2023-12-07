// FT_STRCHR

#include "../libft.h"

int	main(int argc, char **argv)
{
	const char *str;
	int	c;

	str = argv[1];
	c = *argv[2];
	if (argc > 1)
	{
		printf ("String before ft_strchr: %s\n", str);
		printf("String after ft_strchr: %s\n", ft_strchr(str, c));
	}
}