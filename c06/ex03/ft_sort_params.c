/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghebreh <nathnael@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 21:15:13 by nghebreh          #+#    #+#             */
/*   Updated: 2021/07/05 10:40:25 by nghebreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define MAX_SIZE 1000

void	ft_putstr(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		write(1, &str[counter], 1);
		counter++;
	}
	write(1, "\n", 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}

char	*ft_strcpy(char *dest, char *src)
{
	int index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

void	ft_sortstr(int count, char *strv[])
{
	char		temp[MAX_SIZE];
	int			i;
	int			j;

	i = 0;
	while (i < count)
	{
		j = 0;
		while (j < count - 1 - i)
		{
			if (ft_strcmp(strv[j], strv[j + 1]) > 0)
			{
				ft_strcpy(temp, strv[j]);
				ft_strcpy(strv[j], strv[j + 1]);
				ft_strcpy(strv[j + 1], temp);
			}
			j++;
		}
		i++;
	}
}

int		main(int argc, char *argv[])
{
	int i;

	ft_sortstr(argc, argv);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
