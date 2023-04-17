//5+9+13+17+21+......
//finding the summation of this series.
#include<stdio.h>
int main()
{
    int n, sum;
    scanf("%d",&n);
    sum = n/2.0*(2*5+(n-1)*4);

    printf("%d", sum);

    return 0;
}
