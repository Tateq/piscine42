// 	FT_MEMCMP

#include "../libft.h"

int	main()
{
	char	str[] = "ameixa";
	char	str2[] = "ameoxa";
	int		n;
	int result;

	result = ft_memcmp(str, str2, 7);
	if(result > 0)
		printf ("%i || That means string 1 is bigger than string 2\n", result);
	else if(result < 0)
		printf ("%i || That means string 2 is bigger than string 1\n", result);
	else
		printf ("%i || That means string 1 is equal string 2\n", result);
}