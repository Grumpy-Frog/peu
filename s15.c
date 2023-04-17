#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i,j,len;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    len = strlen(str);
    for (i = 0,j = len-1;i < j;i++,j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    for (i = 0; i < len; i++) {
        if (str[i] == ' '||str[i] == '\n') {
            continue;
        }
        for (j = i; j < len&&str[j] != ' '&& str[j] !='\n'; j++) {

        }
        for (int k = i,l = j-1;k < l;k++,l--) {
            char temp = str[k];
            str[k]=str[l];
            str[l]=temp;
        }
        i=j;
    }

    printf("%s",str);

    return 0;
}
