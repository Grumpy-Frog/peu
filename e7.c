#include<stdio.h>
int sum=0;
int sumOfArray(int a)
{
   sum+=a;
   return sum;
}

int main()
{
    int n,mainSum=0;
    int arr[20];

    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        mainSum+=arr[i];
        sumOfArray(arr[i]);
    }
    printf("Sum in Function:%d\n",sum);
    printf("Sum in main:%d",mainSum);
}
