#include<stdio.h>

int multiplyArray(int arr[], int s)
{
    for (int i=0; i<s; i++){
        arr[i]*=2;
        printf("%d ",arr[i]);

}
}
int main()
{
    int n;
    scanf("%d",&n);
    int Arr[n];
    for (int i=0; i<n; i++){
        scanf("%d",&Arr[i]);
    }
    multiplyArray(Arr,n);

    return 0;
}
