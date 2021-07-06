/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghebreh <nathnael@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 15:10:48 by nghebreh          #+#    #+#             */
/*   Updated: 2021/07/05 21:03:01 by nghebreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

int is_base_valid(char *base)
{
	//check for size
	//check for repetitions
	//check for +-
	return (0);
}

void ft_putnbr_base(int nbr, char *base)
{
	//check base validty
	//if valid;
	int radix;
	
	radix = ft_strlen(base);
	while (nbr > 0)
	{
		if (nbr < radix)
		{
			//ft_putchar(base[nbr%radix]);
			//break ;
		}
		ft_putchar(base[nbr/radix]);
		nbr /= radix;
	}
	ft_putchar(base[nbr%radix]);
}

int main(int argc, char* argv[])
{
	ft_putnbr_base(20, "0123456789ABCDEF");
	return (0);
}
