/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghebreh <nathnael@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 17:32:56 by nghebreh          #+#    #+#             */
/*   Updated: 2021/07/10 17:24:08 by nghebreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char		*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	int		length;
	char	*joined;

	i = 0;
	length = 0;
	while (i < size)
		length += ft_strlen(strs[i++]);
	joined = malloc((length + 1) * sizeof(char));
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
