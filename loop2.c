//Write C program to print multiplication table of a given number
#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);

    for(i=1; i<=10; i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }
    main();
}
