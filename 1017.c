#include <stdio.h>
 
int main() {
    int hour, speed, distance = 12;
    double fuel;
    
    scanf("%d %d", &hour, &speed);
    
    fuel = hour * speed;
    printf("%.3lf\n", fuel / distance);
 
    return 0;
}
