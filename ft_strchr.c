#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		j;
	char	*dest;

	dest = (char *)s;
	i = position_c(s, c);
	j = 0;
	while (s[i])
	{
		dest[j] = s[i];
		j++;
		i++;
	}
	if (j == 0 && c != '\0')
		return (NULL);
	dest[j] = '\0';
	return (dest);
}

int	main(void)
{
	char sr[100] = "hello";
	int k = 'h';
	printf("%s\n", ft_strchr(sr, k));
	printf("%s\n", strchr(sr, k));
}
