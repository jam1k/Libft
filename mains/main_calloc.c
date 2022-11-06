/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:39:43 by jshestov          #+#    #+#             */
/*   Updated: 2022/11/04 11:09:34 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"

int	main(void)
{
	int		size;
	void	*d1;
	void	*d2;

	size = 9;
	d1 = ft_calloc(size, sizeof(int));
	d2 = calloc(size, sizeof(int));
	printf("----------calloc works with empty string-------\n");
	if (memcmp(d1, d2, size * sizeof(int)))
		printf("Failed\n");
	free(d1);
	free(d2);
	printf("Success\n");
	return (0);
}
