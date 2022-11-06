/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:32:11 by jshestov          #+#    #+#             */
/*   Updated: 2022/11/03 13:47:57 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	size;

	if (!s1 || !s2)
		return (NULL);
	size = (ft_strlen(s1) + ft_strlen(s2) + 1);
	result = (char *)malloc(sizeof(char) * size);
	if (!result)
		return (NULL);
	ft_bzero(result, size);
	ft_strlcat(result, s1, size);
	ft_strlcat(result, s2, size);
	return (result);
}
