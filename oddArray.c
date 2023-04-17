#include<stdio.h>
int main()
{
    int a[500];
    int n,sum=0;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
        printf("%d ", a[i]);
        if(i%2!=0){
            sum=sum+a[i];
        }
    }
    printf("\n%d",sum);
}
