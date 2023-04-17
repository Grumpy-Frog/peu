#include<stdio.h>
int main()
{
    int n,i,arr[500],idx, idx1;
    scanf("%d",&n);


    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int min=arr[0];
    for(int i=0; i<n; i++){
        if(max<arr[i]){
            max=arr[i];
            idx=i;
        }
        if(min>arr[i]){
            min=arr[i];
            idx1=i;
        }
    }
    printf("max=%d, index=%d\n min=%d, index=%d",max,idx, min, idx1);

}
