#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		printf("%lu", strlen(av[1]));
		printf("%zu", ft_strlen(av[1]));
	}
}
