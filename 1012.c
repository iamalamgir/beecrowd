#include <stdio.h>
 
int main() {
    double A, B, C, areaTri, areaCir, areaTra, areaQua, areaRet, pi=3.14159;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    
    areaTri = 0.5 *A * C;
    printf("TRIANGULO: %.3lf\n",areaTri);
    
    areaCir = pi * C * C;
    printf("CIRCULO: %.3lf\n", areaCir);
    
    areaTra = ((A + B) * C) / 2;
    printf("TRAPEZIO: %.3lf\n", areaTra);
    
    areaQua = B * B;
    printf("QUADRADO: %.3lf\n", areaQua);
    
    areaRet = A * B;
    printf("RETANGULO: %.3lf\n", areaRet);
 
    return 0;
}

