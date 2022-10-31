/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:12:36 by jshestov          #+#    #+#             */
/*   Updated: 2022/10/28 11:45:45 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*void_string_converter(void *str)
{
	char	*string;

	string = (char *) str;
	return (string);
}

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	index;
	char	*string;

	string = void_string_converter(str);
	index = 0;
	while (string[index] != '\0')
	{
		if (index < n)
			string[index] = (unsigned char) c;
		index++;
	}
	return (str);
}
