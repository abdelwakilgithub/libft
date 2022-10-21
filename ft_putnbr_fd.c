#include "libft.h"
#include <unistd.h>

/* long abs_nb(long nb)
{
	if (nb < 0)
		return (-nb);
	else
		return (nb);
}

void fn(long n, int fd)
{
	if (n < 0)
	{
		fn(abs_nb(n), fd);
		write(fd, '-', 1);
	}
	if (n >= 10)
	{
		fn(n / 10, fd);
		write(fd, (n % 10 + 48), 1);
	}
	write(fd, (n % 10 + 48), 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	int i;
	char *str_nb;

	str_nb = ft_itoa(n);
	i = 0;
	while(str_nb[i])
	{
		write(fd, (str_nb + i), 1);
		i++;
	}
	int		i;
	int		len;
	long	nb;
	char	*nb_str;

	nb = n;
	len = len_nb(nb);
	nb = abs_nb(nb);
	i = len - 1;
	while (nb >= 10)
	{
		nb_str[i--] = nb % 10 + 48;
		nb = nb/10;
	}
	nb_str[i] = nb + 48;
	if (n < 0)
		nb_str[0] = '-';
	nb_str[len] = '\0';
	return (nb_str);

	if (nb >= 10)
	{
		
	}
} */

static long abs_nb(long nb)
{
    if (nb < 0)
        return (-nb);
    else
        return (nb);
}

void fn(long n, int fd)
{
    char c;

    c = '-';
    if (n < 0)
    {
        write(fd, &c, 1);
        fn(abs_nb(n), fd);
    }
    if (n >= 10)
    {
        fn(n / 10, fd);
        fn((n % 10), fd);
    }
    else if (n <= 9 && n >= 0)
    {
      	c = n + '0';
      	write(fd, &c, 1);
	}
}


void    ft_putnbr_fd(int n, int fd)
{
    long nb;

    nb = n;
    fn(nb, fd);
}