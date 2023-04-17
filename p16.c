#include<stdio.h>
int main()
{
    int arr[100],n,idx;
    scanf("%d",&n);
    printf("enter the index no to delete:");
    scanf("%d",&idx);

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=idx; i<n; i++){
        arr[i]=arr[i+1];
    }
    for(int i=0; i<n-1; i++){
        printf("%d ",arr[i]);
    }

}

