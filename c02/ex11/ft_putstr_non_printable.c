/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghebreh <nathnael@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 18:10:26 by nghebreh          #+#    #+#             */
/*   Updated: 2021/07/03 14:52:27 by nghebreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < 32 || str[index] == 127)
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[index] / 16]);
			ft_putchar("0123456789abcdef"[str[index] % 16]);
		}
		else
			ft_putchar(str[index]);
		index++;
	}
}
