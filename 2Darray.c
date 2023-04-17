#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[500][500];
    scanf("%d",&n);

    for(int i=0; i<sqrt(n); i++){
        for(int j=0; j<sqrt(n);j++){
            scanf("%d",&arr[i][j]);
        }

    }
    for(int i=0; i<sqrt(n); i++){
        for(int j=0; j<sqrt(n);j++){
                printf("%d",arr[i][j]);
        }
        printf("\n");
    }
}
