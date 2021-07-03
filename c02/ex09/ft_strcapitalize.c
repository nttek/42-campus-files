/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghebreh <nathnael@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 08:34:10 by nghebreh          #+#    #+#             */
/*   Updated: 2021/07/03 15:04:22 by nghebreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	to_upper(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
}

void	to_lower(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c = *c + 32;
}

int		is_alphanumeric(char c)
{
	int is_true;

	is_true = 0;
	if (c >= '0' && c <= '9')
		is_true = 1;
	else if (c >= 'A' && c <= 'Z')
		is_true = 1;
	else if (c >= 'a' && c <= 'z')
		is_true = 1;
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
			to_upper(&str[index]);
		else if (str[index] >= 'A' && str[index] <= 'Z')
			to_lower(&str[index]);
		last = str[index];
		index++;
	}
	return (str);
}
