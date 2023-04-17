//C Program to check whether an integer entered by the user is odd or even

#include<stdio.h>
int main()
{
    int p;
    printf("Enter an integer:");
    scanf("%d",&p);

    if(p%2==0){
        printf("This an Even number.");
    }
    else {
        printf("This an Odd number.");
    }
    return 0;
}
