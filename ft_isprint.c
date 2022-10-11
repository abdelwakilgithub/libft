#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		printf("%d", ft_isprint(av[1][0]));
		printf("%d", isprint(av[1][0]));
		printf("%d", isprint(127));
	}
	return (0);
}
