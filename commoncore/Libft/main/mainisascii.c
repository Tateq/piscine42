// FT_ISASCII

#include "../libft.h"

int	main(int argc, char **argv)
{
	int a;

	if (argc == 2 && !argv[1][1])
	{
		a = argv[1][0];
		if (ft_isascii(a) == 1)
			printf("%d || The character is from the ASCII table.\n", ft_isascii(a));
		else
			printf("%d || The character is not from the ASCII table.\n", ft_isascii(a));
	}
	else
		printf ("Segmentation fault\nPlease, input only one character.\n");
}