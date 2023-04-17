#include<stdio.h>
int main()
{
    int a[100][100], newarr[100];
    int i, j, sum;
    int n;
    printf("Enter the col and row number: ");
    scanf("%d",&n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        sum=0;
        for (j = 0; j < n; j++)
        {
            sum = sum + a[i][j];
            newarr[i] = sum;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d", newarr[i]);
    }

    return 0;
}
