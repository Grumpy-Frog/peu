//fibonacci
#include<stdio.h>
int main()
{
    int n,t1=0,t2=1, nextTerm;
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
    }


}
