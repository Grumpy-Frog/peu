//C Program to Calculate Area of Rectangle
#include<stdio.h>
int main ()
{
    int length,width,area;

    printf("Length:");
    scanf("%d",&length);

    printf("Width:");
    scanf("%d",&width);

    area= length*width;

    printf("Area of the rectangle:%d",area);
    return 0;

}
