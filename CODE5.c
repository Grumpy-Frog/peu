#include<stdio.h>
int main()
{
    float a = 2.3;
    float b = 5.8;
    float c = 1.1;
    float d = 3.5;
    float sum = (a+b-c)*d-a/d;

    // Printing the sum
    printf("(%.2f+%.2f-%.2f)*%.2f-%.2f/%.2f=%.2f\n",a,b,c,d,a,d,sum);

    return 0;
}
