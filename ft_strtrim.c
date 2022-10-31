/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 09:46:49 by jshestov          #+#    #+#             */
/*   Updated: 2022/10/28 14:59:53 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	return_start(char const *s1, char const *set)
{
	int		start;
	int		i;
	int		j;
	char	ch;

	start = 0;
	i = 0;
	j = 0;
	while (set[i] != '\0')
	{
		ch = set[i];
		while (s1[j] != '\0')
		{
			if (s1[j] == ch)
				j++;
			else
			{
				start = j;
				break ;
			}
		}
		i++;
	}
	return (start);
}

static int	return_end(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		end;
	char	ch;

	i = 0;
	j = ft_strlen(s1) - 1;
	end = ft_strlen(s1) - 1;
	while (set[i] != '\0')
	{
		ch = set[i];
		while (j >= 0)
		{
			if (s1[j] == ch)
				j--;
			else
			{
				end = j;
				break ;
			}
		}
		i++;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*result;

	result = (char *) malloc(sizeof(char) * (ft_strlen(s1) + 1));
	start = return_start(s1, set);
	end = return_end(s1, set);
	i = 0;
	while (s1[i] != '\0' && i < end - 1)
	{
		result[i] = s1[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
