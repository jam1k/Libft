/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:28:00 by jshestov          #+#    #+#             */
/*   Updated: 2022/11/04 16:27:13 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"
#include <stdlib.h>

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft.h"

int     strtrim_test(void)
{
    int tests_passed = 0;

    char *str = ft_strtrim(" \n\t \n  \ttrim this string\t \n \t\t  ", "\t \n");
    if (strcmp(str, "trim this string") == 0)
        tests_passed++;
    else
        printf("\nERROR 1: strcmp(str, 'trim this string') != 0\n|%s|", str);
    free(str);

    str = ft_strtrim("trim this string", "\t \n");
    if (strcmp(str, "trim this string") == 0)
        tests_passed++;
    else
        printf("\nERROR 2: strcmp(str, 'trim this string') != 0\n|%s|", str);
    free(str);

    str = ft_strtrim("", "\t \n");
    if (strcmp(str, "") == 0)
        tests_passed++;
    else
        printf("\nERROR 3: strcmp(str, '') != 0\n|%s|", str);
    free(str);

    str = ft_strtrim("\t\n ", "\t \n");
    if (strcmp(str, "") == 0)
        tests_passed++;
    else
        printf("\nERROR 4: strcmp(str, '') != 0\n|%s|", str);
    free(str);

    if (tests_passed == 4)
    {
        printf("\tOK\n");
        return (1);
    }
    return (0);
}

int	main(void)
{
	int			test;

	test = strtrim_test();
    printf("%d", test);
	return (0);
}
