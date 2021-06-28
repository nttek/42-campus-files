/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghebreh <nathnael@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 22:26:21 by nghebreh          #+#    #+#             */
/*   Updated: 2021/06/26 16:34:01 by nghebreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		ft_putchar(str[counter]);
		counter++;
	}
}
