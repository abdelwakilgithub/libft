#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	signe;

	i = 0;
	result = 0;
	signe = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			signe = -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] + -48;
		i++;
	}
	return (signe * result);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{	
		printf("%d\n", atoi(av[1]));
		printf("%d\n", ft_atoi(av[1]));
	}
	return (0);
}
