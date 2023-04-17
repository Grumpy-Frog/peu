#include<stdio.h>

int count_vowel(char letter[], int size)
{
    int i=0,count=0;

    while(letter[i]!=0){
        if(letter[i]=='A'|| letter[i]=='a'|| letter[i]=='E'|| letter[i]=='e'|| letter[i]=='I'|| letter[i]=='i'|| letter[i]=='O'|| letter[i]=='o'|| letter[i]=='U'||letter[i]=='u')
        {
     count++;
        }
        i++;
    }
    return count;
}

int main()
{
    char sentence[100];
    gets(sentence);

    int totalVowel= count_vowel(sentence,100);

    printf("\nThere are %d vowels!\n\n",totalVowel);

    return 0;
}
