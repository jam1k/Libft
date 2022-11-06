/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:34:59 by jshestov          #+#    #+#             */
/*   Updated: 2022/10/26 14:47:04 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "../libft.h"

int	ft_isalnum(int argument);

int	main(void)
{
	char	c;

	c = '#';
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", isalnum(c));
	return (0);
}
