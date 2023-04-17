#include<stdio.h>
int main()
{

    float base,height,area;
    scanf("%f ",&base);
    scanf("%f ",&height);
    scanf("%f ",&area);
    area= (1/2*base*height);
    printf("area: %.2f",area);

    return 0;
}

