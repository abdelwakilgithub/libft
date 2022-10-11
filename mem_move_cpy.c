#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	size_t		i;
	const char	*n_src;
	char		*n_dest;

	i = 0;
	n_src = (const char *)src;
	n_dest = (char *)dest;
	if ((n_src == NULL) && (n_dest == NULL))
		return (NULL);
	while (i < n)
	{
		n_dest[i] = n_src[i];
		i++;
	}
	return (n_dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*n_src;
	char		*n_dest;

	n_src = (const char *)src;
	n_dest = (char *)dest;
	i = n - 1;
	while (i + 1)
	{
		*(n_dest + i) = *(n_src + i);
		i--;
	}
	return (n_dest);
}

char str1[50] = "I am going from Delhi to Gorakhpur";
char str2[50] = "I am going from Delhi to Gorakhpur";

int main()
{
    //Use of memmove
    printf( "Function:\tmemmove with overlap\n" );
    printf( "Orignal :\t%s\n",str1);
    printf( "Source:\t\t%s\n", str1 + 5 );
    printf( "Destination:\t%s\n", str1 + 11 );
    ft_memcpy( str1 + 11, str1 + 5, 23 );
    printf( "Result:\t\t%s\n", str1 );
    printf( "Destination:\t%s\n", str1 + 11 );
    printf( "Length:\t\t%lu characters\n\n", strlen( str1 ) );
    //Use of memcpy
    printf( "Function:\tmemcpy with overlap\n" );
    printf( "Orignal :\t%s\n",str2);
    printf( "Source:\t\t%s\n", str2 + 5 );
    printf( "Destination:\t%s\n", str2 + 11 );
    memcpy( str2 + 11, str2 + 5, 23 );
    printf( "Result:\t\t%s\n", str2 );
    printf( "Destination:\t%s\n", str2 + 11 );
    printf( "Length:\t\t%lu characters\n\n", strlen( str2 ) );
    return 0;
}
