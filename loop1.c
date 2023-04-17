//Write C program to print ASCII values of all characters

#include<stdio.h>
int main()
{
    char ch;

    for(ch='a'; ch<='z'; ch++){
        printf("ASCII value of %c is %d\n", ch,ch);
    }
    return 0;
}
