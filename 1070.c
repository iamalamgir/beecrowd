#include <stdio.h>

int main() {
    int number, i;

    scanf("%d", &number);

    if (number % 2 == 0) {
        number = number + 1;
    }

    for (i = 0; i < 6; i++) {
        printf("%d\n", number);
        number = number + 2;
    }
  
    return 0;
}
