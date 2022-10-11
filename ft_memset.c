#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*e;

	i = 0;
	e = b;
	while (*(e + i) && i < len)
	{
		*(e + i) = c;
		i++;
	}
	return (e);
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("av11\n%s\n", av[1]);
		printf("return : \n%s\n", memset(av[1] + 2, '.', 5 * sizeof(char)));
		printf("av12\n%s\n", av[1]);
		printf("av21\n%s\n", av[2]);
		printf("av22\n%s\n", ft_memset(av[2] + 2, '.', 5 * sizeof(char)));
		printf("av22\n%s\n", av[2]);
	}
}	
