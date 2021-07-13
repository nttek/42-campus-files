/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghebreh <nathnael@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 15:59:53 by nghebreh          #+#    #+#             */
/*   Updated: 2021/07/13 22:16:37 by nghebreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

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

int		is_base_valid(char *str)
{
	int		i;
	int		k;
	int		len;

	len = ft_strlen(str);
	if (str == 0 || len <= 1)
		return (0);
	i = 0;
	while (str[i])
	{
		if (is_space(str[i]) || str[i] == '+' || str[i] == '-')
			return (0);
		i++;
	}
	i = 0;
	while (i < len)
	{
		k = i + 1;
		while (k < len)
			if (str[i] == str[k++])
				return (0);
		i++;
	}
	return (1);
}

int		base_to_dec(char *base, char str)
{
	char *temp;

	temp = base;
	while (*base)
	{
		if (*base == str)
			return (base - temp);
		base++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int		radix;
	int		sign;
	int		nbr;
	int		next;

	if (!is_base_valid(base))
		return (0);
	while (is_space(*str))
		str++;
	sign = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			sign *= -1;
	}
	nbr = 0;
	radix = ft_strlen(base);
	while ((next = base_to_dec(base, *str++)) != -1)
		nbr = nbr * radix + next;
	return ((nbr * sign));
}
