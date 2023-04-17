#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum=1;
    printf("%d!= ",n);
    for(int i=n; i>=2; i=i-1)
    {
        printf("%d X ", i);
        sum = sum*i;
    }
    printf("1=%d\n", sum);
    return 0;
}
