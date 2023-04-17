#include<stdio.h>
int main()
{
    float num,avg,sum=0;
    int n,count=1;
    while(count<=4){
        scanf("%f",&num);
        if(num>0){
            count++;
            sum+=num;
        }
    }
    avg=sum/count;
    printf("%f",avg);
}
