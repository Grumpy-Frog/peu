#include<stdio.h>

int postiveStat(int p)
{
    if(p>0){
        return 1;
    }
    else if(p<0){
        return 0;
    }
    else{
        return 2;
    }
}
int main()
{
    int n;
    scanf("%d",&n);

    if(postiveStat(n)==1){
        printf("%d is a postive number",n);
    }
    else  if(postiveStat(n)==0){
        printf("%d is a negative number",n);
    }
     else{
        printf("Zero");
    }

    return 0;
}
