#include<stdio.h>
int main()
{
    int n,f=1;
    scanf("%d",&n);
    printf("%d!=",n);

    for(int i=1; i<=n; i++){
            if(i<n){
            printf("%d*",i);}
            else{printf("%d",i);}
        f=f*i;
    }
    printf("=%d",f);
    return 0;
}

