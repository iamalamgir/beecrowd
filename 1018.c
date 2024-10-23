#include <stdio.h>

int main() {
    int number;
    
    scanf("%d", &number);
    printf("%d\n", number);
    
    printf("%d nota(s) de R$ 100,00\n", number / 100);
    number = number % 100;
    
    printf("%d nota(s) de R$ 50,00\n", number / 50);
    number = number % 50;
    
    printf("%d nota(s) de R$ 20,00\n", number / 20);
    number = number % 20;
    
    printf("%d nota(s) de R$ 10,00\n", number / 10);
    number = number % 10;
    
    printf("%d nota(s) de R$ 5,00\n", number / 5);
    number = number % 5;
    
    printf("%d nota(s) de R$ 2,00\n", number / 2);
    number = number % 2;
    
    printf("%d nota(s) de R$ 1,00\n", number / 1);
    number = number % 1;

    return 0;
}
