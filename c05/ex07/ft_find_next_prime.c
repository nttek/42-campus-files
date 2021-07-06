/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghebreh <nathnael@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 17:34:50 by nghebreh          #+#    #+#             */
/*   Updated: 2021/07/05 17:49:28 by nghebreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		i;
	double	x;
	double	root;

	x = nb;
	i = 20;
	while (i > 0)
	{
		root = 0.5 * (x + nb / x);
		x = root;
		i--;
	}
	return ((int)root);
}

int	ft_is_prime(int nb)
{
	int i;
	int sqrt;

	if (nb <= 3)
		return (nb > 1 ? 1 : 0);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 2;
	sqrt = ft_sqrt(nb);
	while ((i <= sqrt) && (nb % i != 0))
		i++;
	return (i > sqrt ? 1 : 0);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
