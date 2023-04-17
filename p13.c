#include<stdio.h>
int main()
{
    int arr[100]= {5,10,2,8,1,8,3};
    int n;
    scanf("%d",&n);

    for(int i=6; i>=0; i--)
    {
        arr[i+1]=arr[i];

    }
    arr[0]=n;

    for(int i=0; i<=7; i++)
    {
        printf("%d ",arr[i]);
    }
}
