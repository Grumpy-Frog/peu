#include<stdio.h>
int main()
{
    char str[40],temp;
    fgets(str,sizeof(str),stdin);
    int lenth=strlen(str);

    for(int i=0; i<lenth; i++){
        for(int j=0; j<lenth; j++){
            if(str[i]<str[j]){
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    printf("%s",str);
    return 0;
}
