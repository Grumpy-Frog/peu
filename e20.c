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
int GenNthPrime(int x)
{
    int count=0;
    for(int i=2; ; i++){
        if(isPrime(i)==1){
          count++;
        }
        if(count==x){
            printf("%dth prime: %d ",x,i);
            break;
        }
    }

}
int main()
{
    int term;
    scanf("%d",&term);
    GenNthPrime(term);

    return 0;
}
