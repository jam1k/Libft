/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:11:45 by jshestov          #+#    #+#             */
/*   Updated: 2022/11/02 10:26:19 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft.h"


int	main(void)
{
	char	destination[100] = "destination";
	char	source[50] = "The string for the test";

	ft_strlcpy(destination, source, 50);
	printf("mine = %s\n", destination);
	strcpy(destination, "");
	strlcpy(destination, source, 50);
	printf("their = %s\n", destination);
	return (0);
}
