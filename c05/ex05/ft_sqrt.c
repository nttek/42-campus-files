/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghebreh <nathnael@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:09:36 by nghebreh          #+#    #+#             */
/*   Updated: 2021/07/05 14:52:48 by nghebreh         ###   ########.fr       */
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
	if ((int)root * (int)root == nb)
		return ((int)root);
	return (0);
}
