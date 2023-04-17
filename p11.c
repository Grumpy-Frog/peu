#include<stdio.h>
int main()
{
    int n,binary,arr[500],i=0;
    scanf("%d",&n);

    while(n>0){
        binary=n%2;
        n/=2;
       // printf("%d",binary);
        arr[i]=binary;
        i++;

    }
    printf("\n");
    for(int j=i-1; j>=0; j--){
        printf("%d",arr[j]);
    }
}
