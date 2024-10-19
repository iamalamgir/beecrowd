#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, x2x1, y2y1, sum, square;

    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    x2x1 = (x2 - x1) * (x2 - x1);
    y2y1 = (y2 - y1) * (y2 - y1);
    sum =  x2x1 + y2y1;
    square = sqrt(sum);

    printf("%.4lf\n", square);

    return 0;
}
