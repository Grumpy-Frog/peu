#include<stdio.h>
int main()
{
    int a,b,c,d;


    printf("Enter four numbers:");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    int sum = a*b+(a-c)/d+b;

    printf("(%d*%d+(%d-%d)/%d+%d)=%d\n",a,b,a,c,d,b,sum);

    return 0;

}
