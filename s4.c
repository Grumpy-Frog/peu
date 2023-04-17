#include<stdio.h>

int count_words(char st[],int size)
{
    int i=0, counter=1;

    while(st[i]!=0){
        if(st[i]==' '){
            counter++;
        }
        i++;
    }
    return counter;
}

int main()
{
    char sentence[100];
    gets(sentence);

    int words= count_words(sentence, 100);

    printf("There are %d words.",words);

    return 0;
}
