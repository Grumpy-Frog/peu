#include <stdio.h>

// function to calculate factorial of a number
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// function to calculate nCr
int nCr(int n, int r) {
    int num = factorial(n);
    int den = factorial(r) * factorial(n-r);
    return num / den;
}

// function to calculate nPr
int nPr(int n, int r) {
    int num = factorial(n);
    int den = factorial(n-r);
    return num / den;
}

int main() {
    int n, r;
    printf("Enter values of n and r: ");
    scanf("%d %d", &n, &r);
    if(n < r) {
        printf("Error: n should be greater than or equal to r\n");
    }
    else {
        int ncr = nCr(n, r);
        int npr = nPr(n, r);
        printf("nCr = %d\n", ncr);
        printf("nPr = %d\n", npr);
    }
    return 0;
}
