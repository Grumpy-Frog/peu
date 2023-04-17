#include<stdio.h>

int isGreater(int a, int b)
{
    if(a>b){
        return 1;
    }
    else if(a<b){
        return 0;
    }
    else{
        return 2;
    }
}
int main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);

    if(isGreater(n1,n2)==1){
        printf("%d is greater than %d",n1,n2);
    }
    else if(isGreater(n1,n2)==0){
        printf("%d is less than %d",n1,n2);
    }
    else {
        printf("%d is equal to %d",n2,n1);
    }
    return 0;
}
