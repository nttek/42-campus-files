/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghebreh <nathnael@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 09:38:36 by nghebreh          #+#    #+#             */
/*   Updated: 2021/06/29 17:54:30 by nghebreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alphabet(char c)
{
	int is_true;

	is_true = 1;
	if (c < 'A')
		is_true = 0;
	else if (c > 'Z' && c < 'a')
		is_true = 0;
	else if (c > 'z')
		is_true = 0;
	return (is_true);
}

int		ft_str_is_alpha(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (is_alphabet(str[index]) == 0)
			return (0);
		index++;
	}
	return (1);
}
