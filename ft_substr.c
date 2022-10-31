/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:12:44 by jshestov          #+#    #+#             */
/*   Updated: 2022/10/28 10:22:52 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;
	size_t	str_len;

	result = (char *)malloc((len + 1) * sizeof(char));
	i = 0;
	str_len = ft_strlen((char *)s);
	if (len >= str_len)
		return (NULL);
	while (i < len)
	{
		result[i] = (char)s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
