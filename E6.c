#include<stdio.h>

int sum=0;
int summation(int n)
{
    sum+=n;
}

int main()
{
    int q, number, sum1=0;
    scanf("%d",&q);
    for(int i=1; i<=q; i++){
        scanf("%d",&number);

        sum1+=number;
        summation(number);
    }
    printf("Sum in Function: %d",sum);
    printf("Sum in main: %d",sum1);

    return 0;
}
