// FT_TOLOWER

#include "../libft.h"

int	main(int argc, char **argv)
{
	int	n;

	n = 1;
	if (argc == 1)
		printf ("Please, input a character.");
	while (argv[n])
	{
		printf ("%c\n", ft_tolower(*argv[n]));
		n++;
	}
}