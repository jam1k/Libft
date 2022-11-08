/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:12:58 by jshestov          #+#    #+#             */
/*   Updated: 2022/11/03 09:54:26 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	size_t			j;
	size_t			lendst;
	size_t			lensrc;
	unsigned char	*source;

	lensrc = ft_strlen((char *)src);
	if (dstsize == 0)
		return (lensrc);
	lendst = ft_strlen((char *)dst);
	i = lendst;
	j = 0;
	source = (unsigned char *)src;
	while (source[j] != '\0' && i < dstsize - 1)
	{
		dst[i] = source[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	if (lendst == 0)
		return (lensrc);
    if (dstsize > lendst)
        return (lendst + lensrc);
	return (lensrc + dstsize);
}
