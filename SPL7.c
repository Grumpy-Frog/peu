//C Program to convert celcius to farenheit.
#include<stdio.h>
int main()
{
    float C,F;

    printf("Enter Temperature in Celcius:");
    scanf("%f", &C);

    F= ((9*C)/5)+32;

    printf("%f Celcius = %f Farenheit", C, F);

    return 0;
}


