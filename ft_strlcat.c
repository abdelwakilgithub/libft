#include <stdio.h>
#include <string.h>

static size_t	fn_len(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_c;
	char	*n_src;

	i = 0;
	len_c = fn_len(dst);
	j = len_c;
	n_src = (char *)src;
	if (len_c > dstsize)
		return (len_c + dstsize);
	while (n_src[i] && i < dstsize - len_c - 1)
	{
		dst[j++] = n_src[i++];
	}
	dst[j] = '\0';
	return (len_c + fn_len(n_src));
}

int	main(int ac, char **av)
{	
	char str[] = "world";
	char dest1[100] = "hello";
	char dest2[100] = "hello";

	if(ac == 2)
	{
		printf("dest : %s, src : %s\n", av[1], str);
		printf("%lu\n", strlcat(av[1], str, 2));
		printf("dest : %s, src : %s\n\n", av[1], str);

		printf("dest : %s, src : %s\n", dest1, str);
		printf("%lu\n", strlcat(dest1, str, 2));
		printf("dest : %s, src : %s\n\n", dest1, str);

		printf("dest : %s, src : %s\n", dest2, str);
		printf("%lu\n", ft_strlcat(dest2, str, 2));
		printf("dest : %s, src : %s\n", dest2, str);
	}
}
