//Write C program to print alphabets from a to z

#include<stdio.h>
int main()
{
    char c;
    printf("Alphabets are printing below:\n");
    for(c='a'; c<='z'; c++){
        printf("%c   ",c);
    }
    return 0;
}
