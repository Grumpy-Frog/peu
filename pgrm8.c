#include<stdio.h>
int main()
{
    int u,a,t;

    printf("Enter the values:");
    scanf("%d%d%d",&u,&a,&t);

    int s = u*t + 0.5*a*t;

    printf("Displacement = %d",s);
    return 0;
}
