/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_striteri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 09:31:03 by jshestov          #+#    #+#             */
/*   Updated: 2022/11/04 16:18:14 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
static void    ft_iteri(unsigned int i, char *s)
{
    if (i % 2 == 0)
        *s += 1;
}

int     striteri_test(void)
{
    int tests_passed = 0;

    char *str1 = malloc(sizeof(char) * 10);
    char *str2 = malloc(sizeof(char) * 10);
    str1 = strcpy(str1, "abcdefghi");
    str2 = strcpy(str2, "bbddffhhj");

    void (*f)(unsigned int, char*) = ft_iteri;

    ft_striteri(str1, f);

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

static void	help_function(unsigned int index, char *str)
{
	int		i;
	char	*tmp;

	i = 0;
	index = 0;
	tmp = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			index++;
			tmp[i] = str[i] - 32;
		}
		else
			tmp[i] = str[i];
		i++;
	}
	tmp[i] = '\0';
	ft_strlcpy(str, tmp, 100);
}

int	main(void)
{
	char	s[100] = "Hello";
	void	(*f)(unsigned int, char*);
	int		res;

	f = &help_function;
	ft_striteri(s, f);
	printf("result = %s\n", s);
	res = striteri_test();
	printf("%d", res);
	return (0);
}
