#include<stdio.h>

int EvenOrOdd(int p)
{
    if(p%2==0){
        return 1;
    }
    else{
        return -1;
    }
}

int main()
{
    int n;
    scanf("%d",&n);

    if(EvenOrOdd(n)==1){
        printf("%d is an even number",n);
    }
    else{
        printf("%d is an odd number",n);
    }

    return 0;
}
