#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*e;

	i = 0;
	e = b;
	while (i < len)
	{
		*(e + i) = (unsigned char)c;
		i++;
	}
	return (e);
}
