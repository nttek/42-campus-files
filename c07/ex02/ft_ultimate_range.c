/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghebreh <nathnael@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 16:37:00 by nghebreh          #+#    #+#             */
/*   Updated: 2021/07/09 17:31:15 by nghebreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int length;
	int *array;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	length = max - min;
	if ((array = malloc((length + 1) * sizeof(int))) == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = array;
	while (min < max)
		*array++ = min++;
	return (length);
}
