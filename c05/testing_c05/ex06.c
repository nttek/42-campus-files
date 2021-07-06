#include <stdio.h>
#include "../ex06/ft_is_prime.c"

int ft_is_prime(int nb);

int main()
{
	int i = -3;
	while (i < 100)
	{
		int x = ft_is_prime(i);
		if (x == 1)
			printf("%d\n" , i);
		i++;
	}
	//printf("%d\n", counter);
	return (0);
}
