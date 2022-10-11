#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static int	len_str(const char *s1)
{
	int	i;

	i = 0;
	while (s1[i])
		i++;
	return (i);
}

static int	position_c(const char *s, int c)
{
	int	i;

	i = len_str(s) - 1;
	while (i >= 0)
	{
		if (s[i] == c)
			return (i);
		i--;
	}
	return (len_str(s));
}

char	*ft_strrchr(const char *s, int c)
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
	int k = 'o';
	printf("%s\n", ft_strrchr(sr, k));
	printf("%s\n", strrchr(sr, k));
}
