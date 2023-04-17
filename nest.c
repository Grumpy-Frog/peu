#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int count=n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=(n+(n-1)); j++)
        {
            if(j<count)
            {
                printf("_");
            }
            else
            {
                printf("*");

            }


        }
        printf("\n");
    }
}
