#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* ft_itoa(int value, char* result) {

    char* ptr = result, *ptr1 = result, tmp_char;
    int tmp_value;

    do {
        tmp_value = value;
        value /= 10;
        *ptr++ = "zyxwvutsrqponmlkjihgfedcba9876543210123456789abcdefghijklmnopqrstuvwxyz" [35 + (tmp_value - value * 10)];
    } while ( value );

    // Apply negative sign
    if (tmp_value < 0) *ptr++ = '-';
    *ptr-- = '\0';
    while(ptr1 < ptr) {
        tmp_char = *ptr;
        *ptr--= *ptr1;
        *ptr1++ = tmp_char;
    }
    return result;
}

char *int2words(int num)
{
    char *buffer;
    char numstr[256];

    int div;
    int mod;

	if ((buffer = (char *)malloc((256) * sizeof(char))) == NULL)
		return (0);

    ft_itoa(num, numstr); 
		char d[28][2][15] = {
            "0", "zero", 
            "1", "one",
            "2", "two", 
            "3", "three", 
            "4", "four", 
            "5", "five",
            "6", "six", 
            "7", "seven", 
            "8", "eight", 
            "9", "nine", 
            "10", "ten",
            "11", "eleven", 
            "12", "twelve", 
            "13", "thirteen", 
            "14", "fourteen",
            "15", "fifteen", 
            "16", "sixteen", 
            "17", "seventeen", 
            "18", "eighteen",
            "19", "nineteen", 
            "20", "twenty",
            "30", "thirty", 
            "40", "forty", 
            "50", "fifty", 
            "60", "sixty",
            "70", "seventy", 
            "80", "eighty", 
            "90", "ninety" 
};

    char *h[] = {"hundred", "hundred and"};
    char *k[] = {"thousand", "thousand,"};
    char *m[] = {"million", "million,"};
    char *b[] = {"billion", "billion,"};

    int i = 0;
    if (num < 20)
    {
        while (i < 28)
        {
            if (strcmp(numstr, d[i][0]) == 0)
            {
                strcpy(buffer, d[i][1]);
                return(buffer);
            }
            i++;
        }
    }
    if (num < 100)
    {
        div = num / 10;
        mod = num % 10;

        if (mod == 0)
        {
            while (i < 28)
            {
                if (strcmp(numstr, d[i][0]) == 0)
                {
                    strcpy(buffer, d[i][1]);
                    return(buffer);
                }
                i++;
            }
        }
        else
        {
            char divstr[256];
            ft_itoa(div * 10, divstr);
            i = 0;
            while (i < 28)
            {
                if (strcmp(divstr, d[i][0]) == 0)
                {
                    strcpy(buffer, d[i][1]);
                    break;
                }
                i++;
            }
            i = 0;
            char modstr[256];
            ft_itoa(mod, modstr);
            while (i < 28)
            {
                if (strcmp(modstr, d[i][0]) == 0)
                {
                    strcat(buffer, "-");
                    strcat(buffer, d[i][1]);
                    return (buffer);
                }
                i++;
            }
        }
    } 

    else {
            char        *word1;
            char        *word2;
            int        divisor; 

            if (num < 1000)
            {
                divisor = 100;
                word1 = h[0];
                word2 = h[1];
            }
            
            else if (num < 1000000)
            {
                divisor = 1000;
                word1 = k[0];
                word2 = k[1];
            }

            else if (num < 1000000000)
            {
                divisor = 1000000;
                word1 = m[0];
                word2 = m[1];
            }
            
            else
            {
                divisor = 1000000000;
                word1 = b[0];
                word2 = b[1];
            }
   
        div = num / divisor;
        mod = num % divisor;

        if (mod == 0)
        {
            buffer = int2words(div);
            strcat(buffer, " ");
            strcat(buffer, word1);
            return (buffer);
        }
            
        else
        {
            buffer = int2words(div);
            strcat(buffer, " ");
            strcat(buffer, word2);
            strcat(buffer, " ");
            strcat(buffer, int2words(mod));
            return (buffer);
        }
    }   
    return (buffer); //redundant
}


int is_space(char *str)
{
	char *space = "\t\n\v\f\v ";
	if (*str == ' ' || *str == '\t' || *str == '\n')
		return (1);
	else if (*str == '\v' || *str == '\f' || *str == '\r')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int sign;
	int result;

	while (is_space(str))
		str++;
	sign = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (result * sign);
}

int main(int argc, char **argv)
{
	int num;

	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		if (num < 0 || num > 2147483647)
		{
			printf("ERROR");
			return (0);
		}
		printf("%d = %s\n",num, int2words(num));
	}
	else if (argc == 3)
		;//do something with the dict
/*
	printf("-2147483648 = %s\n", int2words(-2147483648));
    printf("0 = %s\n", int2words(0));
	printf("9 = %s\n", int2words(9));
	printf("14 = %s\n", int2words(14));
	printf("30 = %s\n", int2words(30));
	printf("32= %s\n", int2words(32));
	printf("100 = %s\n", int2words(100));
	printf("201= %s\n", int2words(201));
	printf("1004= %s\n", int2words(1004));
	printf("2147483647 = %s\n", int2words(2147483647));
*/
}
