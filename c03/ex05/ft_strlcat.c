/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghebreh <nathnael@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 19:13:57 by nghebreh          #+#    #+#             */
/*   Updated: 2021/07/03 19:14:00 by nghebreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*dst;
	char			*src_start;
	unsigned int	dst_length;
	unsigned int	available;

	dst = dest;
	src_start = src;
	available = size;
	while (available-- != 0 && *dst != '\0')
		dst++;
	dst_length = dst - dest;
	available = size - dst_length;
	if (available == 0)
		return (dst_length + ft_strlen(src));
	while (*src != '\0')
	{
		if (available > 1)
		{
			*dst++ = *src;
			available--;
		}
		src++;
	}
	*dst = '\0';
	return (dst_length + (src - src_start));
}
