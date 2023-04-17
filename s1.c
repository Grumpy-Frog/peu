#include<stdio.h>
int size =100;
int strlength(char *str)
{
    int i=0;
    int lenght=0;
    while(str[i]!=0){
        i++;
        lenght++;
    }
    return lenght;
}
int main()
{
    char sentence[size];
    gets(sentence);
    int sl=strlength(sentence);

    printf("Length is %d",sl);

    return 0;
}
