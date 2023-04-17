#include<stdio.h>
int main()
{
    int a[10] = {101, 104, 107, 110, 113, 116, 119, 122, 125, 128};
    int i;
    for (int i = 9; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

