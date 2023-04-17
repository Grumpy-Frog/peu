#include <stdio.h>

int sort(int a[], int s)
{
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int num;
    scanf("%d", &num);
    int Arr[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &Arr[i]);
    }

    sort(Arr, num);
    for (int i = 0; i < num; i++)
    {
        printf("%d ",Arr[i]);
    }

    return 0;
}
