#include<stdio.h>
int main()
{
    int i,y;

    int sum=0;

    scanf("%d", &y);
    for(i=1; i<=y; i++){
        sum=sum+i;
         printf("%d\n",sum);
    }
    return 0;
}
