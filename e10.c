#include<stdio.h>
#include<math.h>

int calculatePow(int x, int y)
{
    int power= pow(x,y);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int result=calculatePow(a,b);

    printf("%d to the power %d is %d",a,b,result);

}
