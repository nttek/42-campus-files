/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_disc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghebreh <nathnael@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 13:06:57 by nghebreh          #+#    #+#             */
/*   Updated: 2021/07/13 13:08:11 by nghebreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isspace(char *str)
{
	if (*str == ' ' || *str == '\t' || *str == '\n')
		return (1);
	else if (*str == '\v' || *str == '\f' || *str == '\r')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int sign;
	int result;

	while (isspace(*str))
		str++;
	sign = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (result * sign);
}
