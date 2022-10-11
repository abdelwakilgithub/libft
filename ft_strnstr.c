#include <stdio.h>
#include <string.h>

static size_t	len_str(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static int	locate_f(char *haystack, char *needle, size_t i)
{
	size_t	j;

	j = 0;
	while (needle[j])
	{
		if (needle[j] != haystack[i])
			return (0);
		j++;
		i++;
	}
	return (i - j);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*n_haystack;
	char	*n_needle;

	i = 0;
	n_haystack = (char *)haystack;
	n_needle = (char *)needle;
	while (n_haystack[i] && i + len_str(n_needle) <= len)
	{
		if (locate_f(n_haystack, n_needle, i))
			return (n_haystack + locate_f(n_haystack, n_needle, i));
		i++;
	}
	return (NULL);
}

int	main(void)
{
	const char	*haystack = "hello world";
	const char	*needle = "lo";

	printf("%s\n", strnstr(haystack, needle, 4));
	printf("%s\n", ft_strnstr(haystack, needle, 4));
}
