#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int j=1,sum=0;

    for(i=1;i<=n;i++){
            if(i<n){
        printf("%d+",j);}
        else{printf("%d",j);}
        sum=sum+j;
        j=j+2;
    }
    printf("=%d",sum);
    return 0;
}
