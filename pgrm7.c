#include<stdio.h>
int main()
{
    int u,a,t;

    printf("Enter the values:");
    scanf("%d%d%d",&u,&a,&t);

    int v = u + a*t;

    printf("velocity=%d",v);

    return 0;
}
