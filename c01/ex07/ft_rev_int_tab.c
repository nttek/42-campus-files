/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghebreh <nathnael@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 00:17:18 by nghebreh          #+#    #+#             */
/*   Updated: 2021/06/26 16:38:52 by nghebreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int counter;
	int temp;

	counter = size - 1;
	temp = 0;
	while (counter >= 0)
	{
		temp = temp * 10 + tab[counter];
		counter--;
	}
	*tab = temp;
	printf("%d\n", temp);
}
