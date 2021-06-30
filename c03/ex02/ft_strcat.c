/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghebreh <nathnael@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 07:19:13 by nghebreh          #+#    #+#             */
/*   Updated: 2021/06/30 07:36:27 by nghebreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src)
{
	char *dest_org;

	dest_org = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' )
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return(dest_org);
}
