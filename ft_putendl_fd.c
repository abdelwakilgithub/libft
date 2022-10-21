#include <unistd.h>

static int len_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putendl_fd(char *s, int fd)
{
	char	c;

	c = '\n';
	write(fd, s, len_str(s));
	write(fd, &c, 1);
}