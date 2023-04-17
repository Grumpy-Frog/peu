#include<stdio.h>
int main()
{
    float x,y;
    char c;

    scanf("%f%f%c",&x,&y,&c);

    if(c=='+'){
        printf("%f+%f=%f",x,y,x+y);
    }
    else if (c=='-'){
        printf("%f-%f=%",x,y,x-y);
    }
    else if (c=='*'){
        printf("%f*%f=%",x,y,x*y);
    }
    else if (c=='/'){
            if(y!=0){
        printf("%f/%f=%",x,y,x/y);
    }
    else {
        printf("divisible by zero is not valid");
    }
    }
    return 0;
}

