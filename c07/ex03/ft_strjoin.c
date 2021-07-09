/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghebreh <nathnael@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 17:32:56 by nghebreh          #+#    #+#             */
/*   Updated: 2021/07/09 18:45:09 by nghebreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		k;
	int		length;
	char	*joined;

	i = 0;
	length = 0;
	while (i < size)
	{
		length += ft_strlen(str[i++]);
	}
	joined = malloc((length + 1) * sizeof(char));
	i = 0;
	while (i < size)
	{
		while(strs[i])

	}
}

int main()
{
}
