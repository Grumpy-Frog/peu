#include<stdio.h>

int SwapValue(int x, int y)
{
    int temp=x;
    x=y;
    y=temp;
    printf("Value in func:%d %d\n",x,y);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    SwapValue(a,b);
    int temp1=a;
    a=b;
    b=temp1;

    printf("Value in main: %d %d",a,b);


}
