/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:11:39 by jshestov          #+#    #+#             */
/*   Updated: 2022/11/04 16:34:28 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

int     memset_test(void)
{
	int tests_passed = 0;

	char str1[11] = {'\0'};
	char str2[11] = {'\0'};
    strcpy(str1, "helloworld");
    strcpy(str2, "helloworld");
    ft_memset(str1, '*', 6);
    memset(str2, '*', 6);
	if (memcmp(str1, str2, 10) == 0)
		tests_passed++;
	else
		printf("\nERROR 1: memcmp(str1, str2, 10) != 0\n%s\n", str1);

    ft_memset(str1, 'x', 10);
    memset(str2, 'x', 10);
	if (memcmp(str1, str2, 10) == 0)
		tests_passed++;
	else
		printf("\nERROR 2: memcmp(str1, str2, 10) != 0\n");

    int i1[] = {13, 7, 8, 2, 5};
    int i2[] = {13, 7, 8, 2, 5};
    ft_memset(i1, 0, sizeof(int)*5);
    memset(i2, 0, sizeof(int)*5);
	if (memcmp(i1, i2, sizeof(int)*5) == 0)
		tests_passed++;
	else
		printf("\nERROR 3: memcmp(int1, int2, sizeof(int)*5) != 0, %d\n%d %d %d %d %d\n%d %d %d %d %d\n",
        memcmp(str1, str2, sizeof(int)*5), i1[0], i1[1], i1[2], i1[3], i1[4], i2[0], i2[1], i2[2], i2[3], i2[4]);

    if (tests_passed == 3)
	{
		printf("\tOK\n");
        return (1);
	}
    return (0);
}

int	main(void)
{
	int		test;

	test = memset_test();
	printf("%d", test);
	return(0);
}
