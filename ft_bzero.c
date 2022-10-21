#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*e;

	i = 0;
	e = s;
	while (i < n)
	{
		*(e + i) = 0;
		i++;
	}
	s = e;
}
