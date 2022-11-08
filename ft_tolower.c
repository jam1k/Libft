/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:36:38 by jshestov          #+#    #+#             */
/*   Updated: 2022/10/26 15:06:06 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if ((unsigned char) c >= 'A' && (unsigned char) c <= 'Z')
		return (c + 32);
	else
		return (c);
}
