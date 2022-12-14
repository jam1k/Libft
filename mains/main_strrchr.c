/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:10:42 by jshestov          #+#    #+#             */
/*   Updated: 2022/11/04 12:35:22 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"

int     strchr_test(void)
{
    int tests_passed = 0;

    char *str = "find the correct @ character @";
    char *str2 = "";

    char *p1 = ft_strchr(str, '@');
    char *p2 = strchr(str, '@');
    
    if (strcmp(p1, p2) == 0)
        tests_passed++;
    else
        printf("\nERROR: strcmp(p1, p2) != 0\n%s\n%s\n", p1, p2);
    
    p1 = ft_strchr(str, 'x');
    p2 = strchr(str, 'x');
    if (p1 == p2)
        tests_passed++;
    else
        printf("\nERROR: p1 != p2\n%s\n%s\n", p1, p2);

    p1 = ft_strchr(str, '\0');
    p2 = strchr(str, '\0');
    if (strcmp(p1, p2) == 0)
        tests_passed++;
    else
        printf("\nERROR: strcmp(p1, p2) != 0\n%s\n%s\n", p1, p2);
    
    p1 = ft_strchr(str2, '\0');
    p2 = strchr(str2, '\0');
    if (strcmp(p1, p2) == 0)
        tests_passed++;
    else
        printf("\nERROR: strcmp(p1, p2) != 0\n%s\n%s\n", p1, p2);
    
    if (tests_passed == 4)
	{
		printf("\tOK\n");
        return (1);
	}
    return (0);
}

int	main(void)
{
	char	*src;
	char	*d1;
	char	*d2;
	int		test;

	src = "abbbbbbbb";
	d1 = strrchr(src, 'a');
	d2 = ft_strrchr(src, 'a');
	printf ("mine :%s:\n", d2);
	printf ("their :%s:\n", d1);
	if (d1 == d2)
		printf("success");
	else
		printf("fail");
	
	test = strchr_test();
	printf("%d", test);
	return (0);
}
