/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:29:06 by jshestov          #+#    #+#             */
/*   Updated: 2022/10/26 09:33:14 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int argument)
{
	if ((unsigned char) argument >= '1' && (unsigned char) argument <= '9')
		return (1);
	else
		return (0);
}
