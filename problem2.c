#include<stdio.h>
#include<limits.h>
int main()
{
    int array[12][12];
    int max,max2,row,col,idx,maxidx;
    scanf("%d%d",&row,&col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&array[i][j]);
        }

    }
    max=INT_MIN;
    max2=INT_MIN;
    idx=0;
    maxidx=0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (array[i][j]>max)
            {
                max2=max;
                idx=maxidx;
                max=array[i][j];
                maxidx=j;
            }
            else if (array[i][j]>max2 && array[i][j]<max)
            {
                max2=array[i][j];
                idx=j;
            }


        }

    }
    printf("Collum of 2nd max is : %d\n",idx);

    return 0;
}
