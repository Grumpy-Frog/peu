//keyboard inputs.
#include<stdio.h>
int main()
{

    int n,o;
    char h;

    while(h!='A'){
       // if(h>='a' && h<='z' || h>='A' && h<='Z'){
        for (char i='a'; i<='z'; i++){
            scanf("%c",&h);
            printf("Input :%c\n",h);
        }

          scanf("%d",&n);
          printf("Input:%d",n);


       }

    return 0;
}
