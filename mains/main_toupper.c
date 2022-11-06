/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:35:03 by jshestov          #+#    #+#             */
/*   Updated: 2022/10/26 15:08:24 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	char	c;

	c = '!';
	printf("mine = %d\n", ft_toupper(c));
	printf("their = %d\n", toupper(c));
	return (0);
}
