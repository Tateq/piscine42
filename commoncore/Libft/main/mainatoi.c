//FT_ATOI

#include "../libft.h"

int main(int argc, char **argv)
{
	int n;

	n = 1;
	printf ("Converted ASCII to Integer:\n");
	while (argc > 0 && argv[n])
	{
		printf ("%i\n", ft_atoi(argv[n]));
		n++;
	}
}