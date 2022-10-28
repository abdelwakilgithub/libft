/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabdelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:03:45 by moabdelo          #+#    #+#             */
/*   Updated: 2022/10/26 13:03:47 by moabdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

	n_src = (char *)src;
	if (dstsize == 0)
		return (fn_len(n_src) + dstsize);
	i = 0;
	len_dst = fn_len(dst);
	j = len_dst;
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
