//C Program to perform all arithmetic operations
#include<stdio.h>
int main ()
{
    int n1, n2,sum,sub,mul,mod;
    float div;

    printf("Enter values here:-");
    scanf("%d %d", &n1, &n2);

    sum= n1+n2;
    sub= n1-n2;
    mul= n1*n2;
    mod= n1%n2;
    div= (float)n1/(float)n2;

    printf("\nSummation=%d\nSubtraction=%d\nMultiplication=%d\nModulus=%d\nDivision=%f",sum,sub,mul,mod,div);

    return 0;

}
