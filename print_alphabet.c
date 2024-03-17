#include <stdio.h>

void    ft_alphabet(void)
{
    char letter;

    letter = 'z';

    while ( letter >= 'a')
    {
        printf("%c ",letter);
        letter--;
    }
}

int main()
{
    ft_alphabet();
    printf("\n");
    return (0);
}