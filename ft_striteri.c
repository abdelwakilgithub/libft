#include <stdio.h>

/* static void	fn(unsigned int i, char * str)
{
	i++;
	*str = *str + 2;
} */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i,s + i);
		i++;
	}
}