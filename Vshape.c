#include<stdio.h>
int main()
{
    int n,i,j,l,m,count=1;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=(n+(n-1)); j++)
        {
            if(j>i && j<(n+(n-i)))
            {
                printf("_");
            }
            else
            {
                if(j<=n)
                {
                    printf("%d",j);
                }
                else
                {
                    printf("%d",);

                }
            }
        }
        printf("\n");
    }
}
