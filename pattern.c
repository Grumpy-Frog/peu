#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    for(int i=n; i>=1; i--){

        for(int j=i; j>=1; j--){
            k=2*j;
            printf("%d ",k);

        }
        printf("\n");
    }
}
