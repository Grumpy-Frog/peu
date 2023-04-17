#include<stdio.h>
int main()
{
    int x,y;

    printf("Enter the numbers:");
    scanf("%d %d",&x,&y);

    if(x<y){
        for(int i=x; i<y; i++){
            printf("%d,",i*i);
        }
    }


    else if (x>y){
        for(int i=x; i>y; i--){
            printf("%d,",i*i);}

    }
    printf("Reached!");
}
