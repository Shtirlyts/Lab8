#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_CTYPE, "RUS");

    double x;
    double sum = 0.0;
    int n;

    printf("Введите значение x: ");
    scanf("%lf", &x);
    printf("Введите максимальную степень: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) { 
        double term = sin(pow(x, i));
        sum += term;
        printf("sin(x^%d) = %.6f\n", i, term);
    }
    printf("Сумма = %.6f\n", sum);

    return 0;
}