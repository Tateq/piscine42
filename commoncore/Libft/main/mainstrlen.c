// FT_STRLEN

#include "../libft.h"

int	main(int argc, char **argv)
{
    int	n;

	n = 1; 
	if (argc == 1)
        printf ("Please, input a string.\n");
    while (argv[n])
	{
		printf ("The length of the string is: %ld\n", ft_strlen(argv[n]));
		n++;
	}
}