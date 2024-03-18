#include <stdio.h>

int	ft_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }
return (i);
}

int main() {
    char str[] = "Hello, world!";
    int length = ft_strlen(str);

    printf("Length of \"%s\" is %d\n", str, length);

    return 0;
}