#include<stdio.h>
int main()
{
    int n1,n2,rem,temp,sum=0;
    scanf("%d %d",&n1,&n2);

    for(int i=n1; i<=n2; i+=10){
            i=temp;
        if(i%10==2){
                while(temp!=0){
            int digit=temp%10;
            temp/=10;
            if(digit%2==1){
                sum+=digit*digit;
            }
                }
                if(sum%3==0){
            printf("%d ",i);
        }
    else{printf("not dementor");}

        }
        else{
            printf("Not Dementor");
        }

    }

}
