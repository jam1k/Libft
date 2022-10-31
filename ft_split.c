/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 09:17:37 by jshestov          #+#    #+#             */
/*   Updated: 2022/10/31 13:40:39 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_nb_words(char const *s, char c)
{
	int	count;
	int	i;
	int	old_i;

	count = 0;
	i = 0;
	while (i < (int)ft_strlen(s))
	{
		while (i < (int)ft_strlen(s))
		{
			if (ft_strchr(&c, s[i]) == NULL)
				break ;
			i++;
		}
		old_i = i;
		while (i < (int)ft_strlen(s))
		{
			if (ft_strchr(&c, s[i]) != NULL)
				break ;
			i++;
		}
		if (i > old_i)
			count = count + 1;
	}
	return (count);
}

static char	*word_copy(char const *s, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *) malloc(sizeof(char) * (end - start + 1));
	if (!word)
	{
		free(word);
		return (NULL);
	}
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**res;
	int		index;

	res = (char **)malloc((ft_nb_words(s, c) + 1) * sizeof(char *));
	if (!s || !res)
		return (NULL);
	i = 0;
	j = 0;
	index = -1;
	while (i < (int)ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == (int)ft_strlen(s)) && index >= 0)
		{
			res[j++] = word_copy(s, index, i);
			index = -1;
		}
		i++;
	}
	res[j] = 0;
	return (res);
}
