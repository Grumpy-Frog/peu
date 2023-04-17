#include <stdio.h>
int main()
{
    int n,l=0;
    scanf("%d",&n);

    for(int i=n; i>=1; i--){
        for(int k=0; k<l; k++){
            printf(" ");
        }
        l++;
        for(int j=1; j<=i; j++){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
