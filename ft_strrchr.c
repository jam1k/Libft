/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:54:50 by jshestov          #+#    #+#             */
/*   Updated: 2022/10/27 09:54:25 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		index;
	char	*string;

	string = (char *)s;
	index = ft_strlen(string);
	while (index - 1 > 0)
	{
		if (string[index - 1] == c)
			return (&string[index - 1]);
		index--;
	}
	return (NULL);
}