/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:01:13 by jshestov          #+#    #+#             */
/*   Updated: 2022/11/03 10:18:59 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*shaystack;

	i = 0;
	shaystack = (char *)haystack;
	if (needle[0] == '\0')
		return (shaystack);
	
	if (len > ft_strlen(haystack))
		len = ft_strlen(haystack);
	while (i < len)
	{
		j = 0;
		while (shaystack[i + j] != '\0' && shaystack[i + j] == needle[j]
			&& i + j < len)
		{
			if (needle[j + 1] == '\0')
				return (&shaystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
