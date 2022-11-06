/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:10:42 by jshestov          #+#    #+#             */
/*   Updated: 2022/11/04 16:08:45 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>


int		memchr_test(void)
{
	int tests_passed = 0;

	char *s = "Hi there";

	char *ret1 = ft_memchr(s, 'e', 9);
	char *ret2 = memchr(s, 'e', 9);

	if (strcmp(ret1, ret2) == 0)
		tests_passed++;
	else
		printf("\nERROR 1: strcmp(ret1, ret2 != 0\n");

	ret1 = ft_memchr(s, 'x', 9);
	ret2 = memchr(s, 'x', 9);

	if (ret1 == NULL && ret2 == NULL)
		tests_passed++;
	else
		printf("\nERROR 2: ret1 != NULL\n");

	ret1 = ft_memchr(s, 'r', 3);
	ret2 = memchr(s, 'r', 3);

	if (ret1 == NULL && ret2 == NULL)
		tests_passed++;
	else
		printf("\nERROR 3: ret1 != NULL\n");

	ret1 = ft_memchr(s, 'H', 0);
	ret2 = memchr(s, 'H', 0);

	if (ret1 == NULL && ret2 == NULL)
		tests_passed++;
	else
		printf("\nERROR 4: ret1 != NULL\n");

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
	int		size;
	int		tes;

	src = "/|\x12\xff\x09\0\x42\042\0\42|\\";
	size = 12;
	if (memchr(src, '\0', size) == ft_memchr(src, '\0', size))
	{
		printf("%s\n", (char *)memchr(src, '\0', size));
		printf("%s\n", (char *)ft_memchr(src, '\0', size));
		printf("success\n");
	}
	else
	{
		printf("%s\n", (char *)memchr(src, '\0', size));
		printf("%s\n", (char *)ft_memchr(src, '\0', size));
		printf("fail\n");
	}
	src = "/|\x12\xff\x09\x42\042\42|\\";
	size = 2;
	if (memchr(src, '\x42', size) == ft_memchr(src, '\x42', size))
	{
		printf("%s\n", (char *)memchr(src, '\0', size));
		printf("%s\n", (char *)ft_memchr(src, '\0', size));
		printf("success\n");
	}
	else
	{
		printf("%s\n", (char *)memchr(src, '\0', size));
		printf("%s\n", (char *)ft_memchr(src, '\0', size));
		printf("fail\n");
	}

	tes = memchr_test();
	printf("%d", tes);
	return (0);
}
