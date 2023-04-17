#include<stdio.h>
int main()
{
    int i,j,k,n=1;

    int size2, size;
    scanf("%d",&size);
    size2=size/2+1;
    for(i=1; i<=size2; i++){
        for(j=1; j<=size2-i;j++){
            printf(" ");
        }
        for(int k=1; k<=n; k++){
            printf("%c",k+64);
        }
        n+=2;
        printf("\n");
    }
    return 0;
}
