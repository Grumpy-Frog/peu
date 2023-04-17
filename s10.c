#include<stdio.h>
int main()
{
    char st[30];
    fgets(st,sizeof(st),stdin);
    int len= strlen(st)-1;
    int palindromeStat=1;

    for(int i=0; i<=len/2;i++){
        if(st[i]!=st[len-i-1]){
                palindromeStat=0;
            break;
        }
    }
    if(palindromeStat==1){
    printf("Yes");
    }
    else{
        printf("\nNo");
    }
    return 0;
}
