#include<stdio.h>

int RevArray(int arr[], int s)
{
    for(int i=s-1; i>=0; i--){
        printf("%d ",arr[i]);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int mainArr[n];

    for(int i=0; i<n; i++){
        scanf("%d",&mainArr[i]);
    }
    RevArray(mainArr, n);

    return 0;
}
