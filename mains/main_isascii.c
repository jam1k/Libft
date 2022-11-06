/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:35:06 by jshestov          #+#    #+#             */
/*   Updated: 2022/10/26 14:47:00 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "../libft.h"

int	ft_isascii(int argument);

int	main(void)
{
	int	c;

	c = 0x80;
	printf("%d\n", ft_isascii(c));
	printf("%d\n", isascii(c));
	return (0);
}
