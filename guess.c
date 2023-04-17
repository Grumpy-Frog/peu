//guessing game.
#include <stdio.h>
#include<ctype.h>
int main()
{
    int num, chan; //char c;
    int n;
    printf("Enter the Number: ");
    scanf("%d", &num);
    printf("Enter the number of chance: ");
    scanf(" %d", &chan);
    //scanf("%c",&c);
    while(1){
    for (int i = 1; i <=chan; i++)
    {

        printf("Enter the choice: ");
        scanf(" %d", &n);
        if (num != n){
            printf("wrong.%d choice left\n", (chan - 1));
            chan--;
            if(chan==0){
                printf("player_1 wins\n");
            }

            }
        else if (num == n)
        {
            printf("right.Plyer_2 wins\n");
        }
       /* else

            {
                printf("player_1 wins");
            }*/
    }
    }

    return 0;
}
