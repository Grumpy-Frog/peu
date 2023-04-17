#include<stdio.h>
int main()
{
   int n, arr1[500],arr2[500],count=0;
   printf("enter size");
   scanf("%d",&n);

   for(int i=0; i<n; i++){
    scanf("%d",&arr1[i]);
   }
   for(int i=0; i<n; i++){
    scanf("%d",&arr2[i]);
   }
   for(int a=0; a<n; a++){
    for(int b=0; b<n; b++){
        if(arr1[a]==arr2[b]){
            count++;
        }
    }
   }

   if(count==n){
    printf("Anagram");
   }
   else{
    printf("Sorry");
   }



}
