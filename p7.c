
#include<stdio.h>
int main()
{
    int n,t1=0,t2=1, nextTerm,sum=0;
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
            if(i==1){
                nextTerm=i;
            }
            else{
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;}
        printf("%d ",nextTerm);
        sum+=nextTerm;
    }
    printf("\n\nsum is %d\n\n",sum);


}
