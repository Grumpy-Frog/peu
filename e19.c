#include<stdio.h>

int isPrime(int n)
{
    int primeStat=1;
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            primeStat=0;
            break;
        }

    }
    if(primeStat==1 && n>=2){
        return 1;
    }
    else{
        return 0;
    }
}
int GeneratePrime(int x)
{
    for(int i=2; i<x; i++){
        isPrime(i);
        if(isPrime(i)==1){
            printf("%d ",i);
        }
    }
}
int main()
{
    int num;
    scanf("%d",&num);
    GeneratePrime(num);

    return 0;
}
