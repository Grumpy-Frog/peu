//take in put 3 angle as a input and check if the triangle is valid


#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the angle values:");
    scanf("%d %d %d",&x,&y,&z);

    if(x>0&& x<180){
        if(y>0 && y<180){
            if(z>0 && z<180){
                if(x+y+z==180){
                    printf("Yes");
                }
                else{
                    printf("No");
                }
            } else { printf("No");}
        } else {printf("No");}

    }else{ printf("No");}

}

