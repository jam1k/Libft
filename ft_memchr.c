/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:12:08 by jshestov          #+#    #+#             */
/*   Updated: 2022/10/26 10:41:24 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int ch, size_t count )
{
	size_t	i;

	i = 0;
	while (((unsigned char *) ptr)[i] != '\0')
	{
		if ((i < count) && (((unsigned char *) ptr)[i] == (unsigned char) ch))
		{
			return (&((void *) ptr)[i]);
		}
		i++;
	}
	return (NULL);
}
