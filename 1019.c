#include <stdio.h>
 
int main() {
    int numbers, hours, minutes, seconds, modiolus;
    
    scanf("%d", &numbers);
    
    hours = numbers / 3600;
    modiolus = numbers % 3600;
    minutes = modiolus / 60;
    modiolus = modiolus % 60;
    seconds = modiolus / 1;
    printf("%d:%d:%d\n", hours, minutes, seconds);
 
    return 0;
}
