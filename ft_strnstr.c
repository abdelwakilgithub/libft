/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabdelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:05:27 by moabdelo          #+#    #+#             */
/*   Updated: 2022/10/26 13:05:30 by moabdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len_str(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static int	locate_f(char *haystack, char *needle, size_t i)
{
	size_t	j;

	j = 0;
	while (needle[j])
	{
		if (needle[j] != haystack[i])
			return (-1);
		j++;
		i++;
	}
	return (i - j);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*n_haystack;
	char	*n_needle;

	i = 0;
	if (len == 0 && needle[0] != '\0')
		return (0);
	n_haystack = (char *)haystack;
	n_needle = (char *)needle;
	if (n_needle[0] == '\0')
		return (n_haystack);
	while (n_haystack[i] && i + len_str(n_needle) <= len)
	{
		if (locate_f(n_haystack, n_needle, i) >= 0)
			return (n_haystack + locate_f(n_haystack, n_needle, i));
		i++;
	}
	return (0);
}
