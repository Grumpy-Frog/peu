#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=101; i<=131; i=i+3){
        printf("%d",i);

        sum=sum+i;
        if(i<131){
            printf("+");
        }
    }
    printf("\n%d",sum);
}
