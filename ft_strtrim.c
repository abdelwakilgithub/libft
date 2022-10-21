#include "libft.h"

static int	check_contain(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i++] == c)
			return (1);
	}
	return (0);
}

static int	fn_len_trim(char const *s1, const char *set)
{
	size_t	i;
	size_t	j;
	size_t	nb;

	i = 0;
	j = ft_strlen(s1);
	nb = 0;
	while (s1[i] && check_contain(set, s1[i]))
	{
		nb++;
		i++;
	}
	while (i != ft_strlen(s1) && j > (i - 1) && check_contain(set, s1[j - 1]))
	{
		nb++;
		j--;
	}
	return (ft_strlen(s1) - nb);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		j;
	size_t		index;
	size_t		nb;
	char	*trim_str;

	i = 0;
	index = 0;
	j = ft_strlen(s1);
	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup((char *)s1));

	trim_str = (char *)malloc(fn_len_trim(s1, set) * sizeof(char) + 1);
	if (!trim_str)
		return (0);
	while (s1[i] && check_contain(set, s1[i]))
		i++;
	while (j > (i - 1) && check_contain(set, s1[j - 1]))
		j--;
	nb = j - i;
	while (index < nb)
	{
		trim_str[index++] = s1[i++];
	}
	trim_str[index] = '\0';
	return (trim_str);
}