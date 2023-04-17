#include<stdio.h>

int evenArray(int arr[], int s)
{
    for(int i=0; i<s; i++)
    {
        if(arr[i]%2==0){
            printf("%d ",arr[i]);
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int Arr[n];

    for(int i=0; i<n; i++){
        scanf("%d",&Arr[i]);
    }
    evenArray(Arr, n);
}
