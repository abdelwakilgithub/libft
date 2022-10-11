#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
int	len_str(const char *s1)
{
	int	i;

	i = 0;
	while(s1[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*dest;

	dest = malloc(len_str(s1)*sizeof(char) + 1);
	i = 0;
	while(s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
*/
static int	position_c(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (i);
}

char	*ft_memchr(const char *s, int c, size_t n)
{
	size_t	i;
	size_t	j;
	char	*dest;

	dest = (char *)s;
	i = position_c(s, c);
	j = 0;
	if (!s[i] || c == '\0' || i > n)
		return (NULL);
	while (s[i])
	{
		dest[j] = s[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

int	main(void)
{
	char sr[100] = "hello";
	int k = 'o';
	printf("%s\n", ft_memchr(sr, k, 3));
	printf("%s\n", memchr(sr, k, 3));
}
