#include <stdio.h>
#include <windows.h>

int ft_len(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char *ft_rev(char   *str)
{
    char c;
    int i =0;
    int j = (ft_len(str) - 1);
    while (i < j)
    {
        c = str[j];
        str[j] = str[i];
        str[i] = c;
        i++;
        j--;

    }
    return str;
}

int main(void) {
    char str[100]; // Assuming a maximum length of 100 characters
   
    
    // Prompt the user to enter a string
    printf("Enter a string: ");
    scanf("%s", str); // Read the string from the user
    
    // Reverse the string
    ft_rev(str);
    
    // Print reversed string
    printf("Reversed string: %s", str);
    
    return 0;
}