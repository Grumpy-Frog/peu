#include <stdio.h>
#include <ctype.h>

int main()
{
    int frequency[26]= {0};
    char myStr[50]= {};

    scanf("%s",myStr);



    int i=0;
    while (myStr[i] != '\0')
    {
        frequency[tolower(myStr[i])-'a']++;
        i++;
    }


    int max=-1;
    int charValue=-1;
    for(i=0; i<26; i++)
    {
        if(max<frequency[i])
        {
            max=frequency[i];
            charValue=i;
        }
    }

    printf("%c (or %c)",toupper(charValue+'a'),charValue+'a');
}
