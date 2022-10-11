#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		printf("%d", ft_isascii(av[1][0]));
		printf("%d", isascii(av[1][0]));
		printf("%d", isascii(128));
	}
}
