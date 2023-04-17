#include<stdio.h>
int main()
{
    int item,quant;

    printf("1.Pani puri\n2.Meat Box\n3.Pizza\n4.Burger\n5.Pasta\nSelect Item and Quantity:");
    scanf("%d%d",&item,&quant);

    if(item==1){

        int total_item1= quant*10;
        int vat1= total_item1*0.1;
        printf("Total Bill: %d\n",total_item1+vat1);
    }
    else if(item==2){

        int total_item2= quant*150;
        int vat2= total_item2*0.1;
        printf("Total Bill: %d\n",total_item2+vat2);
    }
    else if(item==3){

        int total_item3= quant*600;
        int vat3= total_item3*0.1;
        printf("Total Bill: %d\n",total_item3+vat3);
    }
    else if(item==4){

        int total_item4= quant*120;
        int vat4= total_item4*0.1;
        printf("Total Bill: %d\n",total_item4+vat4);
    }
    else if(item==5){

        int total_item5= quant*150;
        int vat5= total_item5*0.1;
        printf("Total Bill: %d\n",total_item5+vat5);
    }
    return 0;
}
