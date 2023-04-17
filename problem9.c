#include<stdio.h>
int main(){

    int x,y;
    char c;
    scanf("%d %d %c",&x,&y,&c);
    if(c=='+'){

        printf("%d + %d = %d",x,y,x+y);
    }
    else if(c=='-'){

        printf("%d - %d = %d",x,y,x-y);
    }
    else if(c=='*'){
        printf("%d * %d = %d",x,y,x*y);
    }
    else if(c=='/'){
        if(y!=0){
            printf("%d / %d = %d",x,y,x/y);
        }
        else{
            printf("Divisible by Zero is not valid\n");
        }
    }
    return 0;
}
