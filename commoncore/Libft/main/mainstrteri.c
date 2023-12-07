// FT_STRTERI

#include "../libft.h"

void	f(unsigned int i, char *a)
{
	*a -= 2;
}

int	main()
{
	char	str[] = "Dcvcvc";

	ft_striteri(str, f);
	ft_putendl_fd(str, 1);
}