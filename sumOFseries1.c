#include<stdio.h>
int main()
{
    int n,sum=0,a=2,j=1;
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        if(i>1)
        {
            j=(j*10)+a;
            sum=sum+j;
            a++;
        }
        printf("%d",j);
        if(i<n)
        {
            printf("+");
        }
    }
    sum+=1;
    printf("=%d",sum);


    return 0;
}
