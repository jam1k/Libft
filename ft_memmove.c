/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:12:28 by jshestov          #+#    #+#             */
/*   Updated: 2022/10/26 13:39:21 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*cdest;
	char	*csrc;

	cdest = (char *)dest;
	csrc = (char *)src;
	if ((csrc == NULL) || (cdest == NULL))
		return (NULL);
	if ((csrc < cdest) && (cdest < csrc + n))
	{
		cdest += n;
		csrc += n;
		while (n--)
		{
			*--cdest = *--csrc;
		}
	}
	else
	{
		while (n--)
			*cdest ++ = *csrc ++;
	}
	return (dest);
}
