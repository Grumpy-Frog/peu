//C Program to convert feet to meter

#include<stdio.h>
int main ()
{
    float feet, meter;

    printf("Enter feet:");
    scanf("%f",&feet);

    meter= feet/3.28084;

    printf("%f Feet = %f Meter",feet, meter);

    return 0;


}
