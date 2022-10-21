#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*value;

	i = 0;
	if (count >= 	SIZE_MAX)
		return (0);
	value = (char *)malloc(count * size);
	if (!value)
		return (0);
	while (i < (count * size))
		value[i++] = 0;
	return (value);
}
