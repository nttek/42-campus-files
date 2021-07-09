/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghebreh <nathnael@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 21:15:13 by nghebreh          #+#    #+#             */
/*   Updated: 2021/07/09 10:11:09 by nghebreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}

void	ft_swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sortstr(char **arr, int size)
{
	int		index;
	int		swapped;

	index = 1;
	while (1)
	{
		index = 1;
		swapped = 0;
		while (index < size)
		{
			if (ft_strcmp(arr[index], arr[index + 1]) > 0)
			{
				ft_swap(&arr[index], &arr[index + 1]);
				swapped = 1;
			}
			index++;
		}
		if (!swapped)
			break ;
	}
}

int		main(int argc, char *argv[])
{
	int i;

	ft_sortstr(argv, argc - 1);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
