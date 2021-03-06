/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghebreh <nathnael@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 00:17:18 by nghebreh          #+#    #+#             */
/*   Updated: 2021/06/28 23:55:22 by nghebreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int counter;
	int temp[size];

	counter = size - 1;
	while (counter >= 0)
	{
		temp[size - counter - 1] = tab[counter];
		counter--;
	}
	counter = 0;
	while (counter < size)
	{
		tab[counter] = temp[counter];
		counter++;
	}
}
