//C Program to convert farenheit to celcius
#include<stdio.h>
int main()
{
    float C,F;

    printf("Enter temperature in Farenheit:");
    scanf("%f", &F);

    C=5*(F-32)/9;

    printf("%f Farenheit = %f Celcious", F,C);

    return 0;

}
