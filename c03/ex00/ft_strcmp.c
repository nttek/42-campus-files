/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghebreh <nathnael@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 19:04:24 by nghebreh          #+#    #+#             */
/*   Updated: 2021/07/03 21:13:44 by nghebreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}

int	main()
{
	char str1[] = "ABCDZEF";
	char str2[] = "ABCDEF";
	char str3[] = "ABCDZ";

	printf("Comparing str1 & str2: %d\n", strcmp(str1, str2));
	printf("Comparing str1 & str3: %d\n", strcmp(str1, str3));
	printf("Comparing str3 & str1: %d\n", strcmp(str3, str1));

	printf("Comparing str1 & str2: %d\n", ft_strcmp(str1, str2));
	printf("Comparing str1 & str3: %d\n", ft_strcmp(str1, str3));
	printf("Comparing str3 & str1: %d\n", ft_strcmp(str3, str1));


}
