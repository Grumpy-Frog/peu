#include<stdio.h>

int minimumInArray(int arr[],int s)
{
    int min= arr[0];
    for(int i=1; i<s; i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
   return min;
}

int main()
{
    int n;
    scanf("%d",&n);
    int Arr[n];
    for(int i=0; i<n; i++){
    scanf("%d",&Arr[i]);

    }
    int minimum= minimumInArray(Arr, n);
    printf("Minimum Value:%d",minimum);
}
