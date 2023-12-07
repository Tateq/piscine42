//FT_ISALPHA

#include "../libft.h"

int	main(int argc, char **argv)
{
	int a;

	if (argc == 2 && !argv[1][1])
	{
		a = argv[1][0];
		if (ft_isalpha(a) == 1)
			printf("%d || The character is an alphabet.\n", ft_isalpha(a));
		else
			printf("%d || The character is not an alphabet.\n", ft_isalpha(a));
	}
	else
		printf ("Segmentation fault\nPlease, input only one character.\n");
}