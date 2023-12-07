// FT_SPLIT

#include "../libft.h"

int	main()
{
	char *str = "/Test /*string//for/test/./ ";
	char sep = '/';
	char **split = ft_split(str, sep);
	int	i = 0;
	while (split[i])
	{
		ft_putstr_fd(split[i], 1);
		ft_putchar_fd('\n', 1);
		i++;
	}
}