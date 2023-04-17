#include<stdio.h>
#include<string.h>
int main()
{
   char sentence[70];

   fgets(sentence,sizeof(sentence),stdin);
   int length=strlen(sentence)-1;

   for(int i=length; i>=0; i--){
    printf("%c",sentence[i]);
   }
   printf("\n");

   return 0;

}
