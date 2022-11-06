/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:11:24 by jshestov          #+#    #+#             */
/*   Updated: 2022/11/04 16:31:31 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../libft.h"
#include <stdio.h>
#include <string.h>

int		memcpy_test(void)
{
	int tests_passed = 0;

	char c_src[11] = "an example";
	char c_dest1[10] = {'\0'};
	char c_dest2[10] = {'\0'};

	void *ret1 = ft_memcpy(c_dest1, c_src, 10);
	void *ret2 = memcpy(c_dest2, c_src, 10);

	if (memcmp(ret1, ret2, 10) == 0)
		tests_passed++;
	else
		printf("\nERROR 1: memcmp(ret1, ret2, 10) != 0");
	if (memcmp(c_dest1, c_dest2, 10) == 0)
		tests_passed++;
	else
		printf("\nERROR 2: memcmp(c_dest1, c_dest2, 10) != 0");

	ret1 = ft_memcpy(c_dest1, "\0", 0);
	ret2 = memcpy(c_dest2, "\0", 0);

	if (memcmp(ret1, ret2, 10) == 0)
		tests_passed++;
	else
		printf("\nERROR 3: memcmp(ret1, ret2, 10) != 0");
	if (memcmp(c_dest1, c_dest2, 10) == 0)
		tests_passed++;
	else
		printf("\nERROR 4: memcmp(c_dest1, c_dest2, 10) != 0");

	int i_src[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i_dest1[10];
	int i_dest2[10];

	ret1 = ft_memcpy(i_dest1, i_src, sizeof(int)*10);
	ret2 = memcpy(i_dest2, i_src, sizeof(int)*10);

	if (memcmp(ret1, ret2, sizeof(int)*10) == 0)
		tests_passed++;
	else
		printf("\nERROR 5: memcmp(ret1, ret2, sizeof(int)*10) != 0");
	if (memcmp(i_dest1, i_dest2, sizeof(int)*10) == 0)
		tests_passed++;
	else
		printf("\nERROR 6: memcmp(i_dest1, i_dest2, sizeof(int)*10) != 0");

	if (tests_passed == 6)
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
	char	*src;
	char	dest[50] = "The string to remove";
	char	*src1;
	char	dest1[50] = "The string to remove";
	int		test;

	src = "The string to copy";
	printf("src = :%s:\n", src);
	printf("dest = :%s:\n", dest);
	src1 = "The string to copy";
	printf("src1 = :%s:\n", src1);
	printf("dest1 = :%s:\n", dest1);
	their = memcpy(dest1, src1, 50);
	printf("their = :%s:\n", (char *)their);
	mine = ft_memcpy(dest, src, 50);
	printf("mine = :%s:\n", (char *)mine);
	test = memcpy_test();
	printf("%d", test);
	return (0);
}
