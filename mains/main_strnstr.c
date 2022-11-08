/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:15:54 by jshestov          #+#    #+#             */
/*   Updated: 2022/11/04 12:34:32 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"

int    strnstr_test(void)
{
    int tests_passed = 0;

    char *str = "find the needlneedle needle in the haystack";

    char *p1 = ft_strnstr(str, "needle", 20);
    char *p2 = strnstr(str, "needle", 20);
    
    if (strcmp(p1, p2) == 0)
        tests_passed++;
    else
        printf("\nERROR: strcmp(p1, p2) != 0\n%s\n%s\n", p1, p2);
    
    p1 = ft_strnstr(str, "needle", 19);
    p2 = strnstr(str, "needle", 19);
    if (p1 == p2)
        tests_passed++;
    else
        printf("\nERROR: p1 != p2\n%s\n%s\n", p1, p2);

    p1 = ft_strnstr(str, "", 20);
    p2 = strnstr(str, "", 20);
    if (strcmp(p1, p2) == 0)
        tests_passed++;
    else
        printf("\nERROR: strcmp(p1, p2) != 0\n%s\n%s\n", p1, p2);

    str = "need the /0 needle!";
    p1 = ft_strnstr(str, "needle", 19);
    p2 = strnstr(str, "needle", 19);
    if (p1 == p2)
        tests_passed++;
    else
        printf("ERROR: p1 != p2 (after null)");

    str = "lorem ipsum dolor sit amet";
    p1 = ft_strnstr(str, "ipsumm", 30);
    p2 = strnstr(str, "ipsumm", 30);
    if (p1 == p2)
		tests_passed++;
	else
		printf("ERROR: p1 != p2 (war machine case)");
    
    str = "lorem ipsum dolor sit amet";
    p1 = ft_strnstr(str, "consectetur", 30);
    p2 = strnstr(str, "consectetur", 30);
    if (p1 == p2)
        tests_passed++;
	else
		printf("ERROR: p1 != p2 (war machine case)");
    if (tests_passed == 6)
	{
		printf("\tOK\n");
        return (1);
	}
    return (0);
}

int	main(void)
{
	char	*s1;
	char	*s2;
	size_t	max;
	char	*i1;
	char	*i2;
	int		test;

	s1 = "MZIRIBMZIRIBMZE123";
	s2 = "MZIRIBMZE";
	max = strlen(s2);
	i1 = strnstr(s1, s2, max);
	i2 = ft_strnstr(s1, s2, max);
	printf("--------strnstr works with basic input----------\n");
	printf("mine:%s:\n", i2);
	printf("their:%s:\n", i1);
	if (i1 == i2)
		printf ("Success\n");
	else
		printf ("fail\n");

	test = strnstr_test();
	printf("%d", test);
	return (0);
}
