#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int j=3;
    int sum=0;
    for(i=1; i<=n; i++)
    {
        sum=sum+j;
        j=j+3;
    }
    printf("%d",sum);
    return 0;
}

