#include<stdio.h>
int main()
{
    int n,num, serial=1;
    float total,att, ass, ct, mid, fnl;

    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        printf("Enter att ass ct mid fnl marks here:");
        scanf("%f %f %f %f %f",&att,&ass,&ct,&mid,&fnl);

        mid=(mid/50)*30;
        fnl=(fnl*40)/100;
        total=att+ass+ct+mid+fnl;
        printf("Total Mark: %f\n",total);
        if(total>=90 && total<=100){
            printf("Student %d: A\n",serial);
        }
        else if(total>=86 && total<=89){
            printf("Student %d: A-\n",serial);
        }
         else if(total>=82 && total<=85){
            printf("Student %d: B+\n",serial);
        }
          else if(total>=78 && total<=81){
            printf("Student %d: B\n",serial);
        }
          else if(total>=74 && total<=77){
            printf("Student %d: B-\n",serial);
        }
         else if(total>=70 && total<=73){
            printf("Student %d: C+\n",serial);
        }
         else if(total>=66 && total<=69){
            printf("Student %d: C\n",serial);
        }
         else if(total>=62 && total<=65){
            printf("Student %d: C-\n",serial);
        }
         else if(total>=58 && total<=61){
            printf("Student %d: D+\n",serial);
        }
         else if(total>=55 && total<=57){
            printf("Student %d: D\n",serial);
        }
         else if(total<55){
            printf("Student %d: F\n",serial);
        }

        serial++;









    }
    return 0;

}
