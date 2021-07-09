/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghebreh <nathnael@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 17:34:50 by nghebreh          #+#    #+#             */
/*   Updated: 2021/07/08 17:25:49 by nghebreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	double	x;
	double	root;

	x = nb;
	while (1)
	{
		root = 0.5 * (x + nb / x);
		x = root;
		if ((root * root - nb) < 0.1)
			break ;
	}
	return ((int)root);
}

int	ft_is_prime(int nb)
{
	int i;
	int sqrt;

	if (nb <= 3)
		return (nb > 1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	sqrt = ft_sqrt(nb);
	while (i <= sqrt)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
			return (0);
		i += 6;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
