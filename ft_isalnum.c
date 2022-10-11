#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		printf("%d", ft_isalnum(av[1][0]));
		printf("%d", isalnum(av[1][0]));
	}
	return (0);
}
