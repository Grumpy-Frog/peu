//C Program to convert days to years, weeks and days
#include<stdio.h>
int main()
{
    int days,weeks,years;

    printf("Day:");
    scanf("%d",&days);

    years= days/365;
    weeks= (days%365)/7;
    days= days-((years*365)+(weeks*7));

    printf("%d years %d weeks %d days",years,weeks,days);

    return 0;




}
