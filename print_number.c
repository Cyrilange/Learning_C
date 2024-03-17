#include <stdio.h>

void    ft_number(void)
{
    int num;

    num = '0';

    while ( num <= '9')
    {
        printf("%c ",num);
        num++;
    }
}

int main()
{
    ft_number();
    printf("\n");
    return (0);
}