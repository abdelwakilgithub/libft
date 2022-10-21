#include <stdlib.h>

/*  void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*n_src;
	char		*n_dest;
	char		c1;
	char		c2;

	n_src = (const char *)src;
	n_dest = (char *)dest;
	i = 0;
	c1 = *(n_src + i);
	while (i < n)
	{
		c2 = *(n_src + i + 1);
		*(n_dest + i) = c1;
		c1 = c2;
		i++;
	}
	return (n_dest);
}
 */
/* 
static size_t	len_str(const char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

static char	*ft_strcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

 void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char	*n_src;
	char		*n_dest;
	char		str[len_str(src)];

	n_src = (char *)src;
	n_dest = (char *)dest;
	ft_strcpy(str, n_src, n);
	i = 0;
	while (i < n)
	{
		*(n_dest + i) = str[i];
		i++;
	}
	return (n_dest);
} */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*n_src;
	char		*n_dest;

	n_src = (const char *)src;
	n_dest = (char *)dest;
/* 	if ()
 */	if(dest > src)
	{
		i = n - 1;
		while (i + 1)
		{
			*(n_dest + i) = *(n_src + i);
			i--;
		}
		return (n_dest);
	}
	i = 0;
	while (i < n)
	{
		*(n_dest + i) = *(n_src + i);
		i++;
	}
	return (n_dest);
}