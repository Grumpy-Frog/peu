#include<stdio.h>
int main()
{
    int sample;

    printf("Enter number:");
    scanf("%d",&sample);

    if (sample && ((sample & (sample-1))==0)){
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}
