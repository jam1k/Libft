/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:48:20 by jshestov          #+#    #+#             */
/*   Updated: 2022/11/04 16:19:04 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft.h"

int     strjoin_test(void)
{
    int tests_passed = 0;

    char *str = ft_strjoin("first one", " second one");
    if (strcmp(str, "first one second one") == 0)
        tests_passed++;
    else
        printf("\nERROR: strcmp(str, 'first one second one') != 0\n%s)", str);
    free(str);

    str = ft_strjoin("first one", "");
    if (strcmp(str, "first one") == 0)
        tests_passed++;
    else
        printf("\nERROR: strcmp(str, 'first one') != 0\n%s)", str);
    free(str);

    str = ft_strjoin("", "");
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
	char const	*s1;
	char const	*s2;
	char		*result;
	int			test;

	s1 = "Hello";
	s2 = "-World!";
	result = ft_strjoin(s1, s2);
	printf("result is = %s", result);
	test = strjoin_test();
    printf("%d", test);
	return (0);
}
