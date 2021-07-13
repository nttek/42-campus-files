/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghebreh <nathnael@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 17:32:56 by nghebreh          #+#    #+#             */
/*   Updated: 2021/07/13 23:53:13 by nghebreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	int		length;
	char	*joined;

	joined = (char *)malloc(sizeof(strs));
	if (!joined)
		return (NULL);
	i = 0;
	j = 0;
	while (i < size)
	{
		k = 0;
		while (strs[i][k])
			joined[j++] = strs[i][k++];
		k = 0;
		while (sep[k] && i < size - 1)
			joined[j++] = sep[k++];
		i++;
	}
	joined[j] = '\0';
	return (joined);
}
