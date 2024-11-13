#include <stdio.h>
 
int main() {
    int years, months, days, total_days;
    
    scanf("%d", &total_days);
    
    years = total_days / 365;
    total_days = total_days % 365;
    printf("%d ano(s)\n", years);
    
    months = total_days / 30;
    days = total_days % 30;
    printf("%d mes(es)\n", months);
    
    printf("%d dia(s)\n", days);
 
    return 0;
}
