#include <string.h>
#include <stdio.h>
#include "ft_strcmp.c"

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

