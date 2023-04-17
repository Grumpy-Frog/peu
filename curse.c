#include<stdio.h>
#include<math.h>

int checkerFunc1 (int a)
{
    int firstDig=a%10,lastDig;
    int temp=a;
    while(temp!=0){
        int dig=temp%10;
        temp/=10;
        if(temp==0){
            lastDig=dig;
        }
    }
    if((firstDig==7 || firstDig==1) && (lastDig!=9 && lastDig!=2)){
        return 1;
    }
    else{
        return -1;
    }
}
int checkerFunc2 (int a)
{
    int temp=a,Revarr[100],i=0;
    while(temp!=0){
        int dig=temp%10;
        temp/=10;
        Revarr[i]=dig;
        i++;
    }
    //digits stored in the array in a reverse order.
    int arr[50],j,k=0;
    //sorting the digits in  the original order.
    for(j=i; j>=0; j--){
      arr[j]=Revarr[k];
      k++;
    }
    int Evenstatus=1;
    int Oddstatus=1;
    for(int p=0; p<=i; p++){
        if(p%2==0) //As even indices are the odd position.
        {
            if(arr[p]%2!=0)  //if the number is not even in odd position
                {
                Evenstatus=0;
                break;
            }
        }
        else{
            if(arr[p]%2==0){
                Oddstatus=0;
                break;
            }
        }
    }
    if(Oddstatus==1 && Evenstatus==1){
        return 1;
    }
    else{
        return -1;
    }
}
int strongChecker (int a)
{
    int temp=a,sum=0,fct=1;
    while(temp!=0){
        int dig=temp%10;
        temp/=10;
        for(int i=1; i<=dig; i++){
            fct*=i;
        }
        sum+=fct;
    }
    if(sum==a){
        return 1;
    }
    else{
        return -1;
    }
}
int defectiveChecker (int a)
{
    int sum=0;
    for(int j=1;j<=a; j++){
        if(a%j==0){
            sum+=j;
        }
    }
    if(sum>(2*a)){
        return 1;
    }
    else{
        return -1;
    }
}
int checkerFunc3 (int a)
{
    if(defectiveChecker(a)==-1 && strongChecker(a)==1){
        return 1;
    }
    else{
        return -1;
    }
}
int checkerFunc4 (int a)
{
    int sum=0,temp=a;

    while(temp!=0){
        int dig=temp%10;
        temp/=10;
        sum+=pow(dig,dig);
    }
    if(a>9 && sum%7==0){
        return 1;
    }
    else{
        return -1;
    }
}
int sectumSempra (int a)
{
    if(checkerFunc1 (a)==1 && checkerFunc2 (a)==1 && checkerFunc3 (a)==1 && checkerFunc4 (a)==1 ){
        return 1;
    }
    else{
        return -1;
    }
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=a; i<=b; i++){
        if(sectumSempra(i)==1){
        printf("%d ",i);
    }

}
return 0;
}
