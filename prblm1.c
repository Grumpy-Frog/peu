#include<stdio.h>
int main()
{
    float x;
    printf("Enter a number:");
    scanf("%f",&x);
    if(x>=0){
        printf("Positive");
    }
    else{
        printf("Negative");
    }
    return 0;
}
