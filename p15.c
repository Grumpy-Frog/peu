#include<stdio.h>
int main()
{
    int arr[100],n;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        arr[i]=arr[i+1];
    }
    for(int i=0; i<n-1; i++){
        printf("%d ",arr[i]);
    }

}
