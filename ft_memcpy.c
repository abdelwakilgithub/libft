#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	size_t	i;
	char	*n_src;
	char	*n_dest;

	i = 0;
	n_src = (char *)src;
	n_dest = (char *)dest;
	if ((n_src == NULL) && (n_dest == NULL))
		return (NULL);
	while (i < n)
	{
		n_dest[i] = n_src[i];
		i++;
	}
	return (n_dest);
}

int	main(int ac, char **av)
{
	if (ac == 5)
	{
		printf("%s\n", memcpy(av[1], av[2], 3));
		printf("%s\n", ft_memcpy(av[3], av[4], 3));
		printf("%s :: %s\n", av[1], av[2]);
		printf("%s :: %s\n", av[3], av[4]);
	}
}
