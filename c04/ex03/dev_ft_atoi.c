/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dev_ft_atoi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghebreh <nathnael@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 14:55:50 by nghebreh          #+#    #+#             */
/*   Updated: 2021/07/13 16:29:15 by nghebreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_space(char str)
{
	char *space;

	space = "\t\n\v\f\v ";
	while (*space)
	{
		if (*space == str)
			return (1);
		space++;
	}
	return (0);
}

int		ft_atoi(char *str)
{
	int		sign;
	int		nbr;

	while (is_space(*str))
		str++;
	sign = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	nbr = 0;
	while (*str >= '0' && *str <= '9')
		nbr = nbr * 10 + (*str++ - '0');
	return (nbr * sign);
}

#include <stdio.h>

int		main(void)
{
	char *str;

	str = " ---+--+1234ab567";
	printf("%d\n", ft_atoi(str));
}
