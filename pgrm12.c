#include<stdio.h>
int main()
{
    int x;
    printf("Enter the amount of money:");
    scanf("%d",&x);

    int note500 = x/500;
    x-= note500*500;
    int note100 = x/100;
    x-= note100*100;
    int note50 = x/50;
    x-= note50*50;
    int note10 = x/10;
    x-= note10*10;
    int note5 = x/5;
    x-= note5*5;
    int note1 = x/1;

    printf("%d note(s)of 500\n%d note(s)of 100\n%d note(s)of 50\n%d note(s)of 10\n%d note(s)of 5\n%d note(s)of 1",note500,note100,note50,note10,note5,note1);
    return 0;
}
