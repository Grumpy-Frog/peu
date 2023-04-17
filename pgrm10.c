#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter height in inches:");
    scanf("%d",&a,&b,&c);

    b = a/12;
    c = a%12;

    printf("%d feet %d inch\n",b,c);
    return 0;
}
