#include<stdio.h>
#include<conio.h>
int main()
{
    int rad;
    float pi = 3.14159;

    printf("Enter radius:");
    scanf("%d%f",&rad,&pi);

    float area= rad*rad*pi;

    printf("area=%f",area);
    return 0;
}

