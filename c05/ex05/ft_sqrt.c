/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghebreh <nathnael@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:09:36 by nghebreh          #+#    #+#             */
/*   Updated: 2021/07/09 13:10:00 by nghebreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	double	x;
	double	root;
	int		i;

	x = nb;
	i = 0;
	while (i < 20)
	{
		if (x == 0)
			return (0);
		root = 0.5 * (x + nb / x);
		x = root;
		if ((root * root - nb) < 0.1)
			break ;
		i++;
	}
	if ((int)root * (int)root == nb)
		return ((int)root);
	return (0);
}
