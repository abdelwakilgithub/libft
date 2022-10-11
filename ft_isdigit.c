#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		printf("%d", ft_isdigit(av[1][0]));
		printf("%d", isdigit(av[1][0]));
	}
	return (0);
}
