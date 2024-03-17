#include <stdio.h>

int my_atoi(const char *str) {
    int result = 0;
    int sign = 1; 

    while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r' || *str == '\v' || *str == '\f')
        str++;

    
    if (*str == '-') {
        sign = -1;
        str++;
    } else if (*str == '+') {
        str++;
    }

   
    while (*str >= '0' && *str <= '9') {
        result = result * 10 + (*str - '0');
        str++;
    }

    
    return sign * result;
}

int main() {
    char str[] = "12345";

  
    int num = my_atoi(str);

  
    printf("Converted integer: %d\n", num);

    return 0;
}
