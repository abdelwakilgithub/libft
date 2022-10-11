#include <stdio.h>
#include <string.h>

static size_t	fn_len(const char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (fn_len(src));
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		/*printf("dest : %s src : %s\n", av[1], av[2]);
		printf("%lu\n", strlcpy(av[1], av[2], 20));
		printf("dest : %s src : %s\n\n", av[1], av[2]);*/
		
		printf("ft_ dest : %s src : %s\n", av[2], av[3]);
		printf("ft_ %lu\n", ft_strlcpy(av[2], av[3], 20));
		printf("ft_ dest : %s src : %s\n", av[2], av[3]);
	}
}
