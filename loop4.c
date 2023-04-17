//Nth term.
#include<stdio.h>
int main()
{
    int n,i,j=1;
    scanf("%d",&n);

    for(i=1;i<=n; i++){
        printf("%d ",j);
        j+=2;
    }
    return 0;
}
