#include<stdio.h>
int main()
{
    int arr[3][3],i,j;
    int det;

    printf("enter 9 elements");

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d",&arr[i][j]);
            printf("%d",arr[i][j]);
        }
      printf("\n");
    }
    det=arr[0][0]*((arr[1][1]*arr[2][2])-((arr[1][2]*arr[2][1])))-arr[0][1]*((arr[1][0]*arr[2][2])-((arr[1][2]*arr[2][0])))+arr[0][2]*((arr[1][0]*arr[2][1])-((arr[1][1]*arr[2][0])));

    printf("\n\n%d",det);
}
