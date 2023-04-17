//C Program to Calculate Area of Circle
#include<stdio.h>
int main()
{
    float r, area;

    printf("Enter radius:");
    scanf("%f",&r);

    area= 3.1416*r*r;

    printf("Area of the circle:%f",area);

    return 0;
}
