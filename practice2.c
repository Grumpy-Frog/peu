#include<stdio.h>
int main()
{
    int n, i,sum=0;
    scanf("%d",&n);
    for(i=0;i<=n; i++){
        if(i%2!=0){
                if(i<n){
            printf("%d+",i);}
            else{printf("%d",i);}
            sum+=i;
        }
    }
    printf("=%d",sum);
    return 0;
}
