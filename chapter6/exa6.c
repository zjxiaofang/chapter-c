#include <stdio.h>

double power(double x, int n) {
    double tmp = 1.0;

    while (n--)
        tmp = tmp * x;

    return tmp;
}

int main(void) {
    double a;
    int b;

    puts("求a的b次幂。");
    printf("实数a:"); scanf("%lf", &a);
    printf("整数b:"); scanf("%d", &b);

    printf("%.2f的%d次幂是%.2f。\n", a, b, power(a, b));

    return 0;
}