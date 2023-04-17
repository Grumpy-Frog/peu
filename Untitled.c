#include<stdio.h>
int main(){

    float a,b;
    char c;

    scanf("%f %f %c",&a,&b,&c);

    switch(c){

        case '+':

            printf("%f + %f = %f",a,b,a+b);
            break;

        case '-':
            printf("&f - %f = %f",a,b,a-b);
            break;
        case '*':
            printf("%f * %f = %f",a,b,a*b);
            break;

        case '/':
            if(b!=0){
                printf("%f / %f = %f",a,b,a/b);
            }
            else{
                printf("Zero as divisor is not valid\n");
            }

    }


    return 0;
}
