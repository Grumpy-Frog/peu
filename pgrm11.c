#include<stdio.h>
int main()
{
    int x;
    printf("Enter time in sec:");
    scanf("%d",&x);

    int hours = x/3600;
    x-= hours*3600;
    int mins =(x/60);
    x-= mins*60;
    int seconds =x;

    printf("%d Hours %d minutes %d seconds",hours,mins,seconds);
    return 0;
}
