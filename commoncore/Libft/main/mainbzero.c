// FT_BZERO

#include "../libft.h"

int main(int argc, char **argv)
{
    if (argc == 3) 
	{
        char *str = argv[1];
    	size_t size = ft_atoi(argv[2]);

    	ft_putstr_fd ("String before ft_bzero: ", 1);
		ft_putendl_fd (str, 1);
   		ft_bzero(str, size);
    	ft_putstr_fd ("String after ft_bzero: ", 1);
		ft_putendl_fd (str, 1);
    }
	else 
		ft_putendl_fd("ERROR\nValid input: <string> <size>", 1);  
}