//C Program to Swap Values of Two Variables.

#include<stdio.h>
int main ()
{
    int n1,n2,var;

    printf("Enter the value of n1:");
    scanf("%d",&n1);

    printf("Enter the value of n2:");
    scanf("%d",&n2);

    var=n1;
    n1=n2;
    n2=var;

    printf("\nSwaped values have given below:\nThe value of n1=%d\nThe value of n2=%d",n1,n2);

    return 0;
}
