/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strmapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 09:30:49 by jshestov          #+#    #+#             */
/*   Updated: 2022/11/04 16:21:42 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>
#include <stdio.h>
#include "../libft.h"
#include <stdlib.h>
#include <stdio.h>


static char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*mapping;
	size_t	i;

	if (s == 0 || !(mapping = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		mapping[i] = f(s[i]);
		i++;
	}
	mapping[i] = '\0';
	return (mapping);
}

char    ft_mapi(char c)
{
    if (c % 2 == 0)
        return (c);
    return (c + 1);
}

int     strmapi_test(void)
{
    int tests_passed = 0;

    char *str1;
    char *str2 = malloc(sizeof(char) * 10);
    str1 = ft_strmap("abcdefghi", ft_mapi);
    str2 = strcpy(str2, "bbddffhhj");

    if (strcmp(str1, str2) == 0)
        tests_passed++;
    else
        printf("\nERROR: strcmp(str1, str2) != 0\n%s\n%s", str1, str2);

    free(str1);
    free(str2);
    if (tests_passed == 1)
    {
        printf("\tOK\n");
        return (1);
    }
    return (0);
}

static char	help_function(unsigned int index, char c)
{
	index = 0;
	if (c >= 'a' && c <= 'z')
	{
		index++;
		return (c - 32);
	}
	else
		return (c);
}


int	main(void)
{
	char	(*f)(unsigned int, char);
	int		test;

	f = &help_function;
	printf("result = %s", ft_strmapi("abcA", f));
	test = strmapi_test();
	printf("%d", test);
	return (0);
}
