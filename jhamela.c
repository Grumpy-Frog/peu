//2+6+8+12+14+18+20+....
//=(2+8+14+20+...)+(6+12+16+...)
#include<stdio.h>
int main()
{
    int n, n1, n2, sum, s1, s2;
    scanf("%d",&n);

    if (n%2==0){
        n1= n/2;
        n2= n/2;
    }
    else
    {
        n1= n/2+1;
        n2= n/2;
    }
    s1=(n1/2.0)*(2*2+(n1-1)*6);
    s2=(n2/2.0)*(2*6+(n2-1)*6);

    sum=s1+s2;

    printf("%d", sum);
    return 0;
}
