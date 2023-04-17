#include <stdio.h>

int main()
{

    int size;
    scanf("%d", &size);

    int myArray[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &myArray[i]);
    }

    for (int i = 0; i < size; i++)
    {
        int j = i - 1;
        while (j >= 0)
        {
            if (myArray[i] == myArray[j])
            {
                // There is Duplication
                int k = i + 1;
                while (k < size)
                {
                    myArray[k - 1] = myArray[k];
                    k++;
                }
                size--;
                i--;
            }
            j--;
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", myArray[i]);
    }
    return 0;
}
