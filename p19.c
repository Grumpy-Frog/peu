#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 2, 3, 3, 4, 4, 4, 4, 5, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxCount = 1, count = 1, maxNum = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i-1]) {
            count++;
        } else {
            if (count > maxCount) {
                maxCount = count;
                maxNum = arr[i-1];
            }
            count = 1;
        }
    }

    if (count > maxCount) {
        maxCount = count;
        maxNum = arr[n-1];
    }

    printf("The largest group of the same number is %d, which appears %d times.\n", maxNum, maxCount);

    return 0;
}
