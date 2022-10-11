#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*n_src;
	char		*n_dest;

	n_src = (const char *)src;
	n_dest = (char *)dest;
	i = n - 1;
	while (i + 1)
	{
		*(n_dest + i) = *(n_src + i);
		i--;
	}
	return (n_dest);
}

int	main(int ac, char **av)
{
	if (ac == 5)
	{
		printf("%s\n", memmove(av[1], av[2], 3));
		printf("%s\n", ft_memmove(av[3], av[4], 3));
		printf("%s ::: %s\n", av[1], av[2]);
		printf("%s ::: %s\n", av[3], av[4]);
	}
}
