int	ft_atoi(const char *str)
{
	long	i;
	long	result;
	long	signe;

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
