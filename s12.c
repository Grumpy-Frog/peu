#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],word[20];
    int count = 0;
    int i,j;

    fgets(str, 100, stdin);
    scanf("%s",&word);

    int len = strlen(str);
    int wordlen = strlen(word);

    for (i = 0; i < len; i++) {
        if (str[i] == word[0]) {
            for (j = 1; j < wordlen; j++) {
                if (str[i+j] != word[j]) {
                    break;
                }
            }
            if (j == wordlen) {
                count++;
            }
        }
    }

    printf("%d", count);

    return 0;
}
