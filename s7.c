#include<stdio.h>
int main()
{
    char stnc[30];
    fgets(stnc,sizeof(stnc),stdin);
    int len= strlen(stnc);

    for(int i=0; i<len; i++){
        if(stnc[i]>=97 && stnc[i]<=122){
            stnc[i]-=32;
        }
        else if(stnc[i]>=65 && stnc[i]<90){
            stnc[i]+=32;
        }
    }
    printf("\n%s",stnc);

    return 0;
}
