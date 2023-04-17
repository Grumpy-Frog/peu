#include<stdio.h>
int main()
{
    char str1[60],str2[60];
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);

    int len1=0,len2=0,k=0,p=0;
    while(str1[k]!='\0'){
        len1++;
        k++;
    }
    len1-=1;
    str1[len1]=' ';

    while(str2[p]!='\0'){
        len2++;
        p++;
    }
    int len=len1+len2;
    int j;
    for(int i= len1+1, j=0; i<=len; i++,j++){
        str1[i]=str2[j];
     }

     printf("%s",str1);
     printf("\n");

     return 0;


}
