#include <stdlib.h>
/* 
static size_t	fn_len(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_c;
	char	*n_src;

	i = 0;
	len_c = fn_len(dst);
	j = len_c;
	n_src = (char *)src;
	if (len_c > dstsize)
		return (len_c + dstsize);
	while (n_src[i] && i < dstsize - len_c - 1)
	{
		dst[j++] = n_src[i++];
	}
	dst[j] = '\0';
	return (len_c + fn_len(n_src));
}
  */

static size_t	fn_len(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;
	char	*n_src;

	i = 0;
	len_dst = fn_len(dst);
	j = len_dst;
	n_src = (char *)src;

	if (len_dst > dstsize)
		return (fn_len(n_src) + dstsize);
	if (!src[i])
		return (len_dst + fn_len(n_src));
	while (n_src[i] && i < dstsize - len_dst)
		dst[j++] = n_src[i++];
	if (len_dst + i == dstsize && len_dst < dstsize)
		dst[--j] = '\0';
	else
		dst[j] = '\0';
	return (len_dst + fn_len(n_src));
}