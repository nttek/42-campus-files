/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghebreh <nathnael@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 12:34:16 by nghebreh          #+#    #+#             */
/*   Updated: 2021/07/09 16:36:22 by nghebreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int length;
	int *array;

	if (min >= max)
		return (NULL);
	length = max - min;
	array = malloc((length + 1) * sizeof(int));
	while (min < max)
		*array++ = min++;
	return (array - length);
}
