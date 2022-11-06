/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 09:48:46 by jshestov          #+#    #+#             */
/*   Updated: 2022/11/04 12:32:33 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"

int strncmp_test(void)
{
    int tests_passed = 0;

    if (ft_strncmp("hello world \t", "hello world \t", 20) == 0 && strncmp("hello world \t", "hello world \t", 20) == 0)
        tests_passed++;
    else
        printf("\nERROR: ft_strcmp('hello world \t', 'hello world \t', 20) != 0\n");

    if (ft_strncmp("\200", "\0", 1) > 0 && strncmp("\200", "\0", 1) > 0)
        tests_passed++;
    else
        printf("\nERROR: ft_strcmp('\200', '\\0', 1) <= 0\n");

    if (ft_strncmp("\200", "\0", 0) == 0 && strncmp("\200", "\0", 0) == 0)
        tests_passed++;
    else
        printf("\nERROR: ft_strcmp('\200', '\\0', 0) != 0\n");

    if (ft_strncmp("", "\0", 1) == 0 && strncmp("", "\0", 1) == 0)
        tests_passed++;
    else
        printf("\nERROR: ft_strcmp('', '\\0', 1) != 0\n");

    if (ft_strncmp("test\0 test", "test", 10) == 0 && strncmp("test\0 test", "test", 10) == 0)
        tests_passed++;
    else
        printf("\nERROR: ft_strcmp('test\\0 test', 'test', 10) != 0\n");

    if (ft_strncmp("abcd", "abcde", 4) == 0 && strncmp("abcd", "abcde", 4) == 0)
        tests_passed++;
    else
        printf("\nERROR: ft_strcmp('abcd', 'abcde', 4) != 0\n");
    
        if (ft_strncmp("abcd", "abcde", 5) < 0 && strncmp("abcd", "abcde", 5) < 0)
        tests_passed++;
    else
        printf("\nERROR: ft_strcmp('abcd', 'abcde', 5) >= 0\n");

    if (tests_passed == 7)
	{
		printf("\tOK\n");
        return (1);
	}
    return (0);
} 

int	main(void)
{
	char	*big;
	char	*little;
	size_t	size;
	int		i1;
	int		i2;
	int		test;

	big = "abcdef";
	little = "abcdefghijklmnop";
	size = 6;
	printf("their = %d\n", strncmp(big, little, size));
	printf("mine = %d\n", ft_strncmp(big, little, size));
	i1 = ((strncmp(big, little, size) > 0)
			? 1 : ((strncmp(big, little, size) < 0) ? -1 : 0));
	i2 = ((ft_strncmp(big, little, size) > 0)
			? 1 : ((ft_strncmp(big, little, size) < 0) ? -1 : 0));
	if (i1 == i2)
		printf("Success\n");
	else
		printf("Fail\n");
	
	test = strncmp_test();
	printf("%d", test);
	return (0);
}
