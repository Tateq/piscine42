//FT_ISDIGIT

#include "../libft.h"

int	main(int argc, char **argv)
{
	int a;

	if (argc == 2 && !argv[1][1])
	{
		a = argv[1][0];
		if (ft_isdigit(a) == 1)
			printf("%d || The character is an digit.\n", ft_isdigit(a));
		else
			printf("%d || The character is not an digit.\n", ft_isdigit(a));
	}
	else
		printf ("Segmentation fault\nPlease, input only one character.\n");
}