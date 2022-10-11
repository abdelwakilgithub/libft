#include <stdio.h>
#include <stdlib.h>

static int	len_str(const char *s1)
{
	int	i;

	i = 0;
	while (s1[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*dest;

	dest = (char *)malloc(len_str(s1) * sizeof(char) + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	s1[] = "hello world";

	printf("%s\n", ft_strdup(s1));
}
