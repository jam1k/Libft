/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:11:07 by jshestov          #+#    #+#             */
/*   Updated: 2022/11/04 16:06:10 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft.h"
int		bzero_test(void)
{
	int tests_passed = 0;

	char str1[11] = {'\0'};
	char str2[11] = {'\0'};
    strcpy(str1, "helloworld");
    strcpy(str2, "helloworld");
    ft_bzero(str1, 6);
    bzero(str2, 6);
	if (memcmp(str1, str2, 10) == 0)
		tests_passed++;
	else
		printf("\nERROR 1: memcmp(str1, str2, 10) != 0\n%s\n", str1);

    int i1[] = {13, 7, 8, 2, 5};
    int i2[] = {13, 7, 8, 2, 5};
    ft_bzero(i1, sizeof(int)*5);
    bzero(i2, sizeof(int)*5);
	if (memcmp(i1, i2, sizeof(int)*5) == 0)
		tests_passed++;
	else
		printf("\nERROR 2: memcmp(int1, int2, sizeof(int)*5) != 0\n");

    if (tests_passed == 2)
	{
		printf("\tOK\n");
        return (1);
	}
    return (0);
}

int	main(void)
{
	char	teststr[50] = "The string for the test";
	char	teststr2[50] = "The string for the test";
	char	str[50];
	char	str2[50];
	int		test;

	ft_bzero(teststr, 8);
	bzero(teststr2, 8);
	printf("mine = %s, their = %s\n", teststr, teststr2);
	printf("----bzero with normal params---\n");
	memset(str, 'a', 50);
	memset(str2, 'a', 50);
	bzero(str, 20);
	ft_bzero(str2, 20);
	if (!memcmp(str, str2, 50))
		printf("Success!\n");
	else
		printf("Fail!\n");
	test = bzero_test();
	return (0);
}
