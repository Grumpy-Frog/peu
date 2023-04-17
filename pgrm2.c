#include<stdio.h>
int main()
{
    int a,b;

    printf("Enter Two Numbers:");
    scanf("%d%d", &a,&b);

    printf("%d+%d=%d\n",a,b,a+b);
    printf("%d-%d=%d\n",a,b,a-b);
    printf("%d*%d=%d\n",a,b,a*b);
    printf("%d/%d=%d\n",a,b,a/b);
    printf("%d%c%d=%d\n",a,'%',b,a%b);

    return 0;
}
