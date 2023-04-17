#include <stdio.h>
#include <math.h>

double series_sin(double x, int n) {
    double sum = 0.0;
    double term = x;

    for (int i = 1; i <= n; i++) {
        sum += term;
        term *= (-1) * x * x / ((2 * i) * (2 * i + 1));
    }

    return sum;
}

int main() {
    double x = 1.2;
    int n = 5;

    double result = series_sin(x, n);

    printf("The result of sin(x) = x - x^3/3! + x^5/5! - x^7/7! + ... for x = %f and n = %d is: %f\n", x, n, result);

    return 0;
}
