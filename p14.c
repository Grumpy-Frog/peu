#include<stdio.h>
int main()
{
    int arr[100]= {5,10,2,8,1,8,3};
    int n,pos;
    scanf("%d",&n);
    scanf("%d",&pos);

    for(int i=6; i>=pos; i--)
    {
        arr[i+1]=arr[i];

    }
    arr[pos]=n;

    for(int i=0; i<=7; i++)
    {
        printf("%d ",arr[i]);
    }
}

