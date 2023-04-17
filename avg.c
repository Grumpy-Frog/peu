//random avg.

#include<stdio.h>
int main()
{
    int i,n;
    float sum=0,avg,a;
    printf("Enter quantity:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        scanf("%f",&a);
        sum+=a;

    }

    avg=sum/n;
    printf("avg is %f",avg);
    printf("sum is%f",sum);

    main();
}
