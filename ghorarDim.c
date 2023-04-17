#include <stdio.h>

int main() {
    int num, sum = 0;
    int count=0;
    for (num = 1000; num <= 1400; num++) {
        // Check if number starts with 1 and ends with 2
        if (num % 10 == 2) {
            // Calculate sum of squares of odd digits
            int temp = num;
            while (temp > 0) {
                int digit = temp % 10;
                if (digit % 2 == 1) {
                    sum += digit * digit;
                }
                temp /= 10;
            }
            // Check if sum of squares of odd digits is divisible by 3
            if (sum % 3 == 0) {
                    count ++;
            }
            if (sum % 3 == 0) {

            printf("%d:",count);
                printf("Number is: %d\n", num);
            }
            sum = 0;
        }
    }
    return 0;
}
