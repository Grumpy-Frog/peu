#include<stdio.h>

int CalculateGCD(int a,int b)
{
    int gcd;
    for(int i=1; i<=a && i<=b; i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    return gcd;

}
int CalculateLCM(int x, int y)
{
    int lcm=((x*y)/CalculateGCD(x,y));

    return lcm;
}
int main()
{
    int n1,n2,GCD,LCM;
    scanf("%d %d",&n1,&n2);
    GCD=CalculateGCD(n1,n2);
    LCM=CalculateLCM(n1,n2);

    printf("GCD:%d\n",GCD);
    printf("LCM:%d\n",LCM);

    return 0;
}

