#include <stdio.h>
#include <ctype.h>

int find_length(char a[])
{
    int i=0;
    while (a[i] != '\0')
    {
        i++;
    }
    return i;
}

int find_substr(char a[],char b[])
{
    int len1=find_length(a);
    int len2=find_length(b);

    int i=0,j=0;
    while (a[i] != '\0')
    {
        if(a[i]==b[j])
        {
            int i2=i;
            while (b[j] != '\0' && a[i2]!='\0')
            {
                if(a[i2]==b[j])
                {
                    i2++;
                    j++;
                }
                else
                {
                    i++;
                    j=0;
                    break;
                }
            }

            if(j==len2)
            {
                return 1;
            }
        }
        else
        {
            i++;
        }
    }

    return -1;
}


int main()
{
    char myStr1[50]= {};
    char myStr2[50]= {};

    scanf("%s",myStr1);
    scanf("%s",myStr2);


    if(find_substr(myStr1,myStr2)==1)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }

}
