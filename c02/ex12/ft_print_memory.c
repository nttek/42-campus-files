/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghebreh <nathnael@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 18:49:00 by nghebreh          #+#    #+#             */
/*   Updated: 2021/06/29 21:38:44 by nghebreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void *ft_print_memory(void *addr, unsigned int size)
{
	int x = 0;
}*/

#include <stdio.h>

int main(void)
{

	int num = 123;
	int *ptr; //to store memory address

	printf("Memory address of num = %p\n", &num);

	printf("Now, read/input the  memory address: ");
	scanf ("%p", &ptr);

	printf("Memory address is: %p and its value is: %d\n", ptr, *ptr);

	return 0;
}
