#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*value;

	i = 0;
	value = (char *)malloc(count * size);
	if (!value)
		return (NULL);
	while (i < (count * size))
		value[i++] = 0;
	return (value);
}

int	main(void)
{
	int	i;
	int	*str;

	str = (int *)ft_calloc(90, sizeof(int));
	i = 0;
	while (i < 100)
	{
		printf("%d\n", str[i]);
		i++;
	}
	return (0);
}
