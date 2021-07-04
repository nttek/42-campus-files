/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghebreh <nathnael@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 07:41:04 by nghebreh          #+#    #+#             */
/*   Updated: 2021/07/04 14:19:49 by nghebreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *needle;

	if (*to_find == '\0')
		return (str);
	needle = to_find;
	while (1)
	{
		if (*needle == '\0')
			return ((char *)(str - (needle - to_find)));
		if (*str == *needle)
			needle++;
		else
			needle = to_find;
		if (*str == '\0')
			break ;
		str++;
	}
	return (0);
}
