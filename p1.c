//perfect Number

#include<stdio.h>
int main()
{
    int n,i,sum=0;

    scanf("%d",&n);
    printf("factors are:");

    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            printf(" %d ",i);
            sum=sum+i;
        }
    }
    printf("\nSum is %d",sum);


    if(sum==n*2)
    {
        printf("\nPerfect Number");

    }
    else
    {
        printf("\nNot perfect Number");
    }
    return 0;
}
