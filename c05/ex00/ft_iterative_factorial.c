/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghebreh <nathnael@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 11:54:50 by nghebreh          #+#    #+#             */
/*   Updated: 2021/07/05 12:11:23 by nghebreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int fact;

	if (nb < 0)
		return (0);
	fact = 1;
	while (nb > 0)
		fact *= nb--;
	return (fact);
}
