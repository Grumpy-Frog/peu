#include<stdio.h>
#include<ctype.h>
int main()
{
    char stnc[30];
    fgets(stnc,sizeof(stnc),stdin);
    char x;
    scanf("%c",&x);
    int len= strlen(stnc),count=0;

    for(int i=0; i<len; i++){
        if( tolower (stnc[i])==tolower(x)){
            count++;
        }
    }
    printf("\n%d",count);

    return 0;
}
