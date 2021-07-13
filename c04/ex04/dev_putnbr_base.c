/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dev_putnbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghebreh <nathnael@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 15:10:48 by nghebreh          #+#    #+#             */
/*   Updated: 2021/07/13 22:12:26 by nghebreh         ###   ########.fr       */
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

int		is_space_operator(char str)
{
	char *space;

	space = "\t\n\v\f\v +-";
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
		if (is_space_operator(str[i]))
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

void	ft_putnbr_valid_base(long number, char *base, int radix)
{
	if (number < 0)
	{
		write(1, "-", 1);
		ft_putnbr_valid_base(-number, base, radix);
		return ;
	}
	if (number > radix - 1)
		ft_putnbr_valid_base(number / radix, base, radix);
	write(1, &(base[number % radix]), 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	radix;

	if (!is_base_valid(base))
		return ;
	radix = ft_strlen(base);
	ft_putnbr_valid_base(nbr, base, radix);
}

int main()
{
	ft_putnbr_base(20, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(-2147483648, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(-2147483648, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(1, "helo");
	return (0);
}
