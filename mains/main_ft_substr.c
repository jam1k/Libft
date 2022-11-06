/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:21:03 by jshestov          #+#    #+#             */
/*   Updated: 2022/11/04 11:18:32 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft.h"

int     strsub_test(void)
{
    int tests_passed = 0;

    char *str = ft_substr("grab the substring", 9, 3);
    if (strcmp(str, "sub") == 0)
        tests_passed++;
    else
        printf("\nERROR: strcmp(str, 'sub') != 0\n%s)", str);

    free(str);
    str = ft_substr("grab the substring", 0, 1);
    if (strcmp(str, "g") == 0)
        tests_passed++;
    else
        printf("\nERROR: strcmp(str, 'g') != 0\n%s)", str);

    free(str);
    str = ft_substr("grab the substring", 1, 0);
    if (strcmp(str, "") == 0)
        tests_passed++;
    else
        printf("\nERROR: strcmp(str, '') != 0\n%s)", str);

    free(str);
    if (tests_passed == 3)
    {
        printf("\tOK\n");
        return (1);
    }
    return (0);
}

int	main(void)
{
	char			*result;
	const char		*string;
	char			*s;
	size_t			size;
	char			*ret;
	int				test;

	string = (const char *)malloc(sizeof(char) * 50);
	string = "The string to test";
	result = ft_substr(string, 4, 6);
	printf("substring = %s\n", result);
	printf("-------substr works for a whole string-------\n");
	s = "all of this !";
	size = strlen(s);
	ret = ft_substr(s, 0, size);
	if (!strcmp(s, ret))
	{
		free(ret);
		printf("success!\n");
	}
	if (strcmp(s, ret))
		printf("Fail!\n");
	
	test = strsub_test();
	printf("%d", test);
	return (0);
}
