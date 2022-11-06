/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:11:33 by jshestov          #+#    #+#             */
/*   Updated: 2022/11/04 16:32:35 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	memmove_test(void)
{
	int tests_passed = 0;

	char c_src1[10] = "example x";
	char c_src2[10] = "example x";
	char *c_dest1 = &c_src1[2];
	char *c_dest2 = &c_src2[2];

	char *ret1 = ft_memmove(c_dest1, c_src1, 4);
	char *ret2 = memmove(c_dest2, c_src2, 4);

	if (memcmp(ret1, ret2, 8) == 0)
		tests_passed++;
	else
		printf("\nERROR 1: memcmp(ret1, ret2, 8) != 0\n%s\n%s\n", ret1, ret2);
	if (memcmp(c_dest1, c_dest2, 8) == 0)
		tests_passed++;
	else
		printf("\nERROR 2: memcmp(c_dest1, c_dest2, 8) != 0\n");

	ret1 = ft_memmove(c_src1, c_dest1, 0);
	ret2 = memmove(c_src2, c_dest2, 0);

	if (memcmp(ret1, ret2, 10) == 0)
		tests_passed++;
	else
		printf("\nERROR 3: memcmp(ret1, ret2, 10) != 0\n%s\n%s\n", ret1, ret2);
	if (memcmp(c_src1, c_src2, 10) == 0)
		tests_passed++;
	else
		printf("\nERROR 4: memcmp(c_dest1, c_dest2, 10) != 0\n");

	if (tests_passed == 4)
	{
		printf("\tOK\n");
        return (1);
	}
    return (0);
}

int	main(void)
{
	char	*their;
	char	*mine;
	char	src[50] = "The string for the test";
	int		test;

	mine = ft_memmove(src + 2, src, 5);
	their = memmove(src + 2, src, 5);
	printf("mine :%s:\n", mine);
	printf("their :%s:\n", their);
	test = memmove_test();
	printf("%d", test);
	return (0);
}
