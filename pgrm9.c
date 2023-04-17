#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter height in cm:");
    scanf("%d",&a,&b,&c);

    b = a/100;
    c = a%100;

    printf("%d meter %d cm\n",b,c);
    return 0;
}
