#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		printf("%d", isalpha(av[1][0]));
		printf("%d", ft_isalpha(av[1][0]));
		//printf("%c",av[1][0]);
	}
	return (0);
}
