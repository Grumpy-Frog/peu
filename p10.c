#include<stdio.h>
int main()
{
   int num;
    int sum = 0, dig;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num / 10 != 0)
    {
        sum = 0;
        while(num != 0)
        {
            dig= num % 10;  // get the last digit of num
            sum += dig;      // add rem to sum
            num = num / 10;  // remove the last digit from num
        }

        num = sum;
    }

    printf("%d", sum);

    return 0;
}
