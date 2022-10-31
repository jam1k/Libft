/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:12:16 by jshestov          #+#    #+#             */
/*   Updated: 2022/10/26 10:32:33 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num )
{
	size_t			index;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = ((unsigned char *) ptr1);
	s2 = ((unsigned char *) ptr2);
	index = 0;
	while (s1[index] == s2[index] && s1[index] != '\0'
		&& s2[index] != '\0' && index < num)
	{
		index++;
	}
	return (s1[index] - s2[index]);
}
