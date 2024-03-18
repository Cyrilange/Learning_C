#include <stdio.h>


int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sign);
}

int	main(void)
{
    char examples[][50] = {  // Adjusted to non-const strings
        "   ---+--+1234ab567",
        "-123",
        "+456",
        "789",
        "0",
        "  123 456",
        "   \t\n-789",
        "   123abc",
        "   +123 456",
        "bonjour 1 commentvas6",
        "   -123 456",
        "" // End of examples
    };

    int i = 0;
    while (examples[i][0] != '\0')
    {
        printf("String: \"%s\" -> Integer: %d\n", examples[i], ft_atoi(examples[i]));
        i++;
    }

    return 0;
}