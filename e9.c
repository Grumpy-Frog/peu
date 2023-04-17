#include<stdio.h>
int fact=1;
int factorial(int n )
{
    for(int i=n; i>0; i--){
        fact*=i;
    }
}
int main()
{
    int num;
    scanf("%d",&num);
    factorial(num);

    printf("%d",fact);

    return 0;
}
