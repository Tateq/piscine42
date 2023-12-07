// FT_MEMSET

#include "../libft.h"

int main()
{
	char	str[] = "This is a string.";
	char	c;

	c = '0';
	printf ("String before ft_memset: %s\n", str);
	ft_memset(str, c, 18);
	printf ("String after ft_memset: %s\n", str);
}