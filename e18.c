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
int main()
{
    int x;
    scanf("%d",&x);

    if(isPrime(x)==1){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}
