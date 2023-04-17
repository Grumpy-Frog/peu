#include<stdio.h>
int main()
{
    int a = 21;
    int b = 15;
    int c = 34;
    int d = 6;
    int sum = a*b+(float)(a-c)/d+b;

    printf("(%d*%d+(%d-%d)/%d+%d)=%d\n",a,b,a,c,d,b,sum);

    return 0;

}
