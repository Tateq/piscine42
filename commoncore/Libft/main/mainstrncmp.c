// FT_STRNCMP

#include "../libft.h"

int	main(int argc, char **argv)
{
	const char *s1;
	const char *s2;
	size_t n;

	s1 = argv[1];
	s2 = argv[2];
	n = *argv[3];
	if (argc == 4)
	{
		if (ft_strncmp(s1, s2, n) == 0)
			printf ("%d || The strings are equal.\n", ft_strncmp(s1, s2, n));
		else
			printf ("%d || The strings are different.\n", ft_strncmp(s1, s2, n));
	}
}