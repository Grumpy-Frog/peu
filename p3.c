#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    int rev=0, temp=n;

    while(temp!=0){
        int digit=temp%10;
        rev =(rev*10)+digit;
        temp/=10;
    }
    printf("%d",rev);
    if(n==rev){
        printf("\nPalindrome");
    }
    else{
        printf("\nNot Palindrome");
    }
    return 0;
}
