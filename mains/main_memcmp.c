/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:11:17 by jshestov          #+#    #+#             */
/*   Updated: 2022/11/04 16:29:51 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

int		memcmp_test(void)
{
	int tests_passed = 0;

	char *s1 = "testing this string\0 which continues";
	char *s2 = "testing this string\0 which continues";
	char *s3 = "testing this string ";

	if (ft_memcmp(s1, s2, strlen(s1) + 1) == memcmp(s1, s2, strlen(s1) + 1))
		tests_passed++;
	else
		printf("\nERROR 1: ft_memcmp(s1, ..) != memcmp(s1, ..)\n%d\n%d\n",
		ft_memcmp(s1, s2, strlen(s1) + 1), memcmp(s1, s2, strlen(s1) + 1));

	if (ft_memcmp(s1, s3, strlen(s3)) == memcmp(s1, s3, strlen(s3)))
		tests_passed++;
	else
		printf("\nERROR 2: ft_memcmp(s1, ..) != memcmp(s1, ..)\n%d\n%d\n",
		ft_memcmp(s1, s3, strlen(s3)), memcmp(s1, s3, strlen(s3)));

	if (ft_memcmp(s1, s3, strlen(s3) - 1) == memcmp(s1, s3, strlen(s3) - 1))
		tests_passed++;
	else
		printf("\nERROR 3: ft_memcmp(s1, ..) != memcmp(s1, ..)\n%d\n%d\n",
		ft_memcmp(s1, s3, strlen(s3) - 1), memcmp(s1, s2, strlen(s3) - 1));

	if (ft_memcmp("\0", "\0", 1) == memcmp("\0", "\0", 1))
		tests_passed++;
	else
		printf("\nERROR 4: ft_memcmp('\\0', '\\0', 1) != memcmp('\\0', '\\0', 1)\n%d\n%d\n",
		ft_memcmp("\0", "\0", 1), memcmp("\0", "\0", 1));

	if (ft_memcmp("\0", "\200", 1) < 0 && memcmp("\0", "\200", 1) < 0)
		tests_passed++;
	else
		printf("\nERROR 5: signs differ for ft_memcmp('\\0', '\200', 1) and memcmp('\\0', '\200', 1)\n%d\n%d\n",
		ft_memcmp("\0", "\200", 1), memcmp("\0", "\200", 1));

	if (ft_memcmp("\0", "\200", 0) == memcmp("\0", "\200", 0))
		tests_passed++;
	else
		printf("\nERROR 6: ft_memcmp('\\0', '\200', 0) != memcmp('\\0', '\200', )\n%d\n%d\n",
		ft_memcmp("\0", "\200", 0), memcmp("\0", "\200", 0));

	if (ft_memcmp("a", "A", 2) > 0 && memcmp("a", "A", 2) > 0)
		tests_passed++;
	else
		printf("\nERROR 7: signs differ for ft_memcmp('a', 'A', 2) and memcmp('a', 'A', 1)\n%d\n%d\n",
		ft_memcmp("a", "A", 2), memcmp("a", "A", 2));

	if (ft_memcmp("", "", 1) == memcmp("", "", 1))
		tests_passed++;
	else
		printf("\nERROR 8: ft_memcmp('', '', 1) != memcmp('', '', 1)\n%d\n%d\n",
		ft_memcmp("", "", 1), memcmp("", "", 1));

	int i1[] = {1, 2, 3, 4, 5, 6, 7, 8, 0};
	int i2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	if (ft_memcmp(i1, i2, sizeof(int)*9) == memcmp(i1, i2, sizeof(int)*9))
		tests_passed++;
	else
		printf("\nERROR 9: ft_memcmp(i1, i2, sizeof(int)*9) != memcmp(i1, i2, sizeof(int)*9)\n%d\n%d\n",
		ft_memcmp(i1, i2, sizeof(int)*9), memcmp(i1, i2, sizeof(int)*9));

	if (ft_memcmp(i1, i2, sizeof(int)*10) == memcmp(i1, i2, sizeof(int)*10))
		tests_passed++;
	else
		printf("\nERROR 10: ft_memcmp(i1, i2, sizeof(int)*10) != memcmp(i1, i2, sizeof(int)*10)\n%d\n%d\n",
		ft_memcmp(i1, i2, sizeof(int)*10), memcmp(i1, i2, sizeof(int)*10));

	if (tests_passed == 10)
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
	size_t	size;
	int		i1;
	int		i2;
	int		test;

	s1 = "\xff\xaa\xde\x12";
	s2 = "\xff\xaa\xde\x12MACOSAAAAA";
	size = 4;
	i1 = memcmp(s1, s2, size);
	i2 = ft_memcmp(s1, s2, size);
	if (i1 == i2)
	{
		printf("Success\n");
		printf("i1 = :%d:\n", i1);
		printf("i2 = :%d:\n", i2);
	}
	else
		printf("FAil\n");
	test = memcmp_test();
	printf("%d", test);
	return (0);
}
