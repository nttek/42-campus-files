#include <stdio.h>
#include "../ex07/ft_find_next_prime.c"

int ft_find_next_prime(int nb);

int main()
{
	printf("The next prime greater or equal to 5 is: %d\n", ft_find_next_prime(5));
	printf("The next prime greater or equal to 10 is: %d\n", ft_find_next_prime(10));
	printf("The next prime greater or equal to 100 is: %d\n", ft_find_next_prime(100));
	printf("The next prime greater or equal to 1000 is: %d\n", ft_find_next_prime(1000));
	printf("The next prime greater or equal to 50000 is: %d\n", ft_find_next_prime(50000));
	printf("The next prime greater or equal to 2147483647 is: %d\n", ft_find_next_prime(2147483647));
}
