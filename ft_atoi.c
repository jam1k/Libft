/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:50:43 by jshestov          #+#    #+#             */
/*   Updated: 2022/10/24 18:24:57 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	sum;
	int	sign;
	int	index;

	sum = 0;
	sign = 1;
	index = 0;
	while (str[index] == '\f' || str[index] == '\t' || str[index] == '\n'
		|| str[index] == '\r' || str[index] == '\v' || str[index] == ' ')
		index++;
	if (str[index] == '-')
		sign *= -1;
	if (str[index] == '-' || str[index] == '+')
		index++;
	while (str[index] >= '0' && str[index] <= '9')
	{
		sum = sum * 10 + str[index] - '0';
		index++;
	}
	return (sum * sign);
}
