#include<stdio.h>
int main()
{
    float count=0;
    float n,sum=0,avg;

    while(n!=0){
        scanf("%f",&n);
        if(n>0){
            sum+=n;
            count++;
        }
        /*else if(n==0){
            break;*/
        }


    avg=sum/count;
    printf("%f",avg);
}
