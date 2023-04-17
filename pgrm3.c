#include<stdio.h>
int main()
{
    float a,b;

    printf("Enter Two Numbers:");
    scanf("%f%f", &a,&b);

    printf("%.2f+%.2f=%.2f\n",a,b,a+b);
    printf("%.2f-%.2f=%.2f\n",a,b,a-b);
    printf("%.2f*%.2f=%.2f\n",a,b,a*b);
    printf("%.2f/%.2f=%.2f\n",a,b,a/b);


    return 0;
}

