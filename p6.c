#include<stdio.h>
#include<math.h>
int main()
{
    float c;
    int i,j;

    for(i=1; i<=100;i++){
        for(j=1; j<=100; j++){
            c=sqrt((i*i)+(j*j));
            if(c==(int)c){
                printf("%d %d %d\n",i,j,(int) c);
            }
        }
    }

}
