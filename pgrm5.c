#include<stdio.h>
int main()
{
    float a,b,c,d;

    printf("Enter four numbers:");
    scanf("%f%f%f%f",&a,&b,&c,&d);

    float sum = (a+b-c)*d-a/d;

    // Printing the sum
    printf("(%.2f+%.2f-%.2f)*%.2f-%.2f/%.2f=%.2f\n",a,b,c,d,a,d,sum);

    return 0;
}
