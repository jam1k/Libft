/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:12:22 by jshestov          #+#    #+#             */
/*   Updated: 2022/11/02 09:19:09 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	size_t	index;

	index = 0;
	if (!dest && !src)
		return (0);
	while (index < n)
	{
		((unsigned char *) dest)[index] = ((unsigned char *) src)[index];
		index++;
	}
	return (dest);
}
