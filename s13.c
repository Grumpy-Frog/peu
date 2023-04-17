#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i,j,k;
    fgets(str, 100, stdin);

    int len = strlen(str);
    for (i = 0; i < len; i++) {
        for (j = i + 1; j < len; j++) {
            if (str[j] == str[i]) {
                for (k = j; k < len; k++) {
                    str[k] = str[k+1];
                }
                len--;
                j--;
            }
        }
    }
    printf("%s", str);

    return 0;
}
