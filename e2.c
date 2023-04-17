#include<stdio.h>

void input(char d);

int main()
{
    char x;
    scanf("%c",&x);
    input(x);

    return 0;
}

void input(char d)
{
    printf("Value received from main: %c\n",d);
}
