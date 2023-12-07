// FT_ISPRINT

#include "../libft.h"

int	main(int argc, char **argv)
{
	int a;

	if (argc == 2 && !argv[1][1])
	{
		a = argv[1][0];
		if (ft_isprint(a) == 1)
			printf("%d || The character is printable.\n", ft_isprint(a));
		else
			printf("%d || The character is not printable.\n", ft_isprint(a));
	}
	else
		printf ("Segmentation fault\nPlease, input only one character.\n");
}