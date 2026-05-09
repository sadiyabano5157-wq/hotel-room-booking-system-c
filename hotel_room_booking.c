#include<stdio.h>

int main()
{
    int room, day;
    float charge, discount, final_bill;

    printf("Enter room type\n");

    printf("1 = AC Room\n");
    printf("0 = Non AC Room\n");

    scanf("%d",&room);

    printf("Enter days\n");
    scanf("%d",&day);

    if(room==1)
    {
        charge = day * 2000;

        printf("AC Room Charge = %.2f\n",charge);
    }
    else
    {
        charge = day * 1000;

        printf("Non AC Room Charge = %.2f\n",charge);
    }

    if(day>3)
    {
        discount = charge * 10 / 100;
    }
    else
    {
        discount = 0;
    }

    final_bill = charge - discount;

    printf("Discount = %.2f\n",discount);

    printf("Final Bill = %.2f\n",final_bill);

    return 0;
}
