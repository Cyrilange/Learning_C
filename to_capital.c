#include <stdio.h>

char *ft_to_capital(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; 
        }
        i++;
    }
    return str;
}

int main() {
    char str[] = "hello, world!";

    printf("Original string: %s\n", str);
    
    char *capitalized_str = ft_to_capital(str);
    
    printf("Capitalized string: %s\n", capitalized_str);

    return 0;
}