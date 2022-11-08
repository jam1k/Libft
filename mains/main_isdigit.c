/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:35:11 by jshestov          #+#    #+#             */
/*   Updated: 2022/11/02 09:33:29 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "../libft.h"

int	ft_isdigit(int argument);

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
