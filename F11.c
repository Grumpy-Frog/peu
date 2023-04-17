#include<stdio.h>
#include<string.h>
 int stringLenth(char str[], int s)
 {
     int i=0, count=0;

     while(str[i]!='\0'){
        count++;
        i++;
     }
     return count;

 }

 int main()
 {
   char strng[30];
   fgets(strng,sizeof(strng),stdin);

   int len= stringLenth(strng,30);

   printf("%d",len-1);
 }
