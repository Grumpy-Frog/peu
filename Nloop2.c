#include<stdio.h>
int main()
{
    int n,x=1;
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%d",x);
            x++;

        }
        printf("\n");
        x=i+1;

    }
    return 0;
}
