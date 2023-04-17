//Armstrong number

#include<stdio.h>
#include<math.h>
int main()
{
    int n,digit,sum=0;
    scanf("%d",&n);
    int temp=n;

    while(temp!=0)
    {
        digit= temp%10;
        temp=temp/10;
        printf("%d ",digit);
        sum+=pow(digit,3);
    }
    printf("\n%d",sum);

    if(sum==n)
    {
        printf("\nArmstrong number");
    }
    else
    {
        printf("\nNot Armstrong number");
    }
    return 0;
}
