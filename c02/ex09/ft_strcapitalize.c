/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghebreh <nathnael@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 08:34:10 by nghebreh          #+#    #+#             */
/*   Updated: 2021/06/29 09:05:05 by nghebreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_change_case(char *c)
{
	if (*c >= 'a' && *c <= 'z')
	{
		*c = *c - 32;
	}
	else if (*c >= 'A' && *c <= 'Z')
	{
		*c = *c + 32;
	}
}

int		is_alphanumeric(char c)
{
	int is_true;

	is_true = 1;
	if (c < '0')
		is_true = 0;
	else if (c > '9' && c < 'A')
		is_true = 0;
	else if (c > 'Z' && c < 'a')
		is_true = 0;
	else if (c > 'z')
		is_true = 0;
	return (is_true);
}

char	*ft_strcapitalize(char *str)
{
	int		index;
	char	last;

	index = 0;
	last = ' ';
	while (str[index] != '\0')
	{
		if (is_alphanumeric(last) == 0)
			ft_change_case(&str[index]);
		else if (str[index] >= 'A' && str[index] <= 'Z')
		{
			ft_change_case(&str[index]);
		}
		last = str[index];
		index++;
	}
	return (str);
}
