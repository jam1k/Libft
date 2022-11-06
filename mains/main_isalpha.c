/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:35:03 by jshestov          #+#    #+#             */
/*   Updated: 2022/11/02 09:34:48 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "../libft.h"

int	ft_isalpha(int argument);

int	main(void)
{
	int	i;

	i = -1;
	while (i < 530)
	{
		if (!!ft_isalpha(i) != !!isalpha(i))
			printf ("%d Fail\n", i);
		else
			printf ("%d Success\n", i);
		i++;
	}
	return (0);
}
