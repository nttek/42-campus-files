/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghebreh <nathnael@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 15:21:41 by nghebreh          #+#    #+#             */
/*   Updated: 2021/07/06 16:01:05 by nghebreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(char *src)
{
	char *str = src;
	while (*src)

	char *dest = malloc(5*sizeof('a'));
	char *temp = str;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (dest);
}

#include <stdio.h>
int main()
{
	char src [] = "why";
	char *copied = ft_strdup(src);
	while (*copied)
	{
		printf("%c", *copied);
		copied++;
	}

	printf("%lu\n", sizeof('a'));
}
