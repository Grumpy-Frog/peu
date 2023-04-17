#include<stdio.h>
#include<stdio.h>

int main()
{
    char str[30];
    int sum=0;
    fgets(str,sizeof(str),stdin);
    int len= strlen(str);

    for(int i=0; i<len; i++){
        if(isdigit(str[i])){
            sum+=str[i]-'0';
        }
    }
    printf("\n%d",sum);

    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char word[20];
    int count = 0;
    int i, j, len, wordlen;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    printf("Enter a word: ");
    scanf("%s", word);

    len = strlen(str);
    wordlen = strlen(word);

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

    printf("The word '%s' occurs %d times in the string.", word, count);

    return 0;
}
