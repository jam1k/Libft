/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:35:11 by jshestov          #+#    #+#             */
/*   Updated: 2022/10/26 14:46:57 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "../libft.h"

int	ft_isprint(int argument);

int	main(void)
{
	char	c;
	int		a;

	c = 'a';
	printf("%d\n", ft_isprint(c));
	printf("%d\n", isprint(c));
	a = 0x80;
	printf("%d\n", ft_isprint(a));
	printf("%d\n", isprint(a));
	return (0);
}
