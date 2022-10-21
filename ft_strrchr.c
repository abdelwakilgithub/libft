/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabdelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:49:03 by moabdelo          #+#    #+#             */
/*   Updated: 2022/10/14 11:49:11 by moabdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	len_str(const char *s1)
{
	int	i;

	i = 0;
	while (s1[i])
		i++;
	return (i);
}

static int	position_c(const char *s, char c)
{
	int	i;

	i = len_str(s) - 1;
	while (i >= 0)
	{
		if (s[i] == c)
			return (i);
		i--;
	}
	return (-1);
}

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = position_c(s, (char)c);
	if ((char)c == '\0')
		return ((char *)s + len_str(s));
	if (i == -1 && (char)c != '\0')
		return (0);
	return ((char *)s + i);
}
