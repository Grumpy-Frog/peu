#include<stdio.h>
int main()
{
    int n1,n2,GCD;
    scanf("%d %d",&n1,&n2);

    for(int i=1; i<=n1 && i<=n2; i++){
        if(n1%i==0 && n2%i==0){
            GCD=i;
        }
    }
    printf("GCD is %d",GCD);

    int LCM=(n1*n2)/GCD;
    printf("\nLCM is %d",LCM);

    return 0;
}