//harshad number
#include<stdio.h>
int main()
{
    int n,sum=0,temp,digit;
    scanf("%d",&n);
    temp=n;

    while(temp!=0){
        digit=temp%10;
        temp=temp/10;
        printf("%d ",digit);
        sum+=digit;
    }
    printf("\nSum is %d",sum);

    if(n%sum==0){
        printf("\nHarshade Number ");
    }
    else{
        printf("\nNot a Harshad Number");
    }
    return 0;
}
