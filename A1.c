#include<stdio.h>
int main()
{
    int n,arr[500][500],sum,newArr[100];
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n; i++){
            sum=0;
        for(int j=0; j<n; j++){
            sum+=arr[i][j];
            newArr[i]=sum;
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ",newArr[i]);
    }
}
