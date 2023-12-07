// FT_STRMAPI

#include "../libft.h"

char	etoa(unsigned int i, char a)
{
	char e;

	e = 'a';
	if (a == 'e')
		a = e;
	if (a == 'E')
		a == 'A';
}

int	main()
{
	char *str = "Eu estou com fome!";
	
	ft_putendl_fd(ft_strmapi(str, etoa), 1);
}