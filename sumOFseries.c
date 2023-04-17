#include<stdio.h>
int main()
{
    int n,sum;
    scanf(" %d",&n);

    for(int i=1; i<=n; i++){
        if(i%2==0){
          printf("-%d",i);
            sum-=i;
        }
        else{
            printf("%d",i);
            sum+=i;
        }
        if(i<n){
            printf(",");
        }
    }
    printf("=%d ",sum);
    return 0;
}

