#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*cs1;
	char	*cs2;

	cs1 = (char *)s1;
	cs2 = (char *)s2;
	i = 0;
	while (1)
	{
		if (cs1[i] != cs2[i] || i == n - 1)
			return (cs1[i] - cs2[i]);
		i++;
	}
	return (cs1[i] - cs2[i]);
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%d\n", memcmp(av[1], av[2], 5));
		printf("%d\n", ft_memcmp(av[1], av[2], 5));
	}
	return (0);
}
