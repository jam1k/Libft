/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:27:49 by jshestov          #+#    #+#             */
/*   Updated: 2022/11/04 15:52:34 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"
#include <stdlib.h>

int atoi_test(void)
{
    int tests_passed = 0;

    if (ft_atoi("40002") == atoi("40002"))
        tests_passed++;
    else
    {
        printf("\nERROR: ft_atoi('40002') != atoi('40002')\n%d\n", ft_atoi("40002"));
    }
    if (ft_atoi("  0050") == atoi("  0050"))
        tests_passed++;
    else
    {
        printf("\nERROR: ft_atoi('  +00950') != atoi('  +00950')\n%d\n", ft_atoi("  0050"));
    }
    if (ft_atoi("42school") == atoi("42school"))
        tests_passed++;
    else
    {
        printf("\nERROR: ft_atoi('42school') != atoi('42school')\n%d\n", ft_atoi("42school"));
    }
    if (ft_atoi("school42") == atoi("school42"))
        tests_passed++;
    else
    {
        printf("\nERROR: ft_atoi('school42') != atoi('school42')\n%d\n", ft_atoi("school42"));
    }
    if (ft_atoi("\t\n\v\f\r 42") == atoi("\t\n\v\f\r 42"))
        tests_passed++;
    else
    {
        printf("\nERROR: ft_atoi('\t\n\v\f\r 42') != atoi('\t\n\v\f\r 42')\n%d\n", ft_atoi("\t\n\v\f\r 42"));
    }
    if (ft_atoi("2147483647 1") == atoi("2147483647 1"))
        tests_passed++;
    else
    {
        printf("\nERROR: ft_atoi('2147483647 1') != atoi('2147483647 1')\n%d\n", ft_atoi("2147483647 1"));
    }
    if (ft_atoi("-2147483648") == atoi("-2147483648"))
        tests_passed++;
    else
    {
        printf("\nERROR: ft_atoi('-2147483648') != atoi('-2147483648')\n%d\n", ft_atoi("-2147483648"));
    }
    if (ft_atoi("+-2") == atoi("+-2"))
        tests_passed++;
    else
    {
        printf("\nERROR: ft_atoi('+-2') != atoi('+-2')\n%d\n", ft_atoi("+-2"));
    }
    if (ft_atoi("99999999999999999999999999999999999") == atoi("99999999999999999999999999999999999"))
        tests_passed++;
    else
    {
        printf("\nERROR: ft_atoi('-+2') != atoi('-+2')\n%d\n", ft_atoi("-+2"));
    }
    if (ft_atoi("") == atoi(""))
        tests_passed++;
    else
    {
        printf("\nERROR: ft_atoi('') != atoi(')\n%d\n", ft_atoi(""));
    }
    if (tests_passed == 10)
	{
		printf("\tOK\n");
        return (1);
	}
    return (0);
}

int	main(void)
{
	int	res;

	res = atoi_test();
    printf("res = %d", res);
	return (0);
}
