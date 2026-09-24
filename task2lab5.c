#include <stdio.h>

int main()
{
    float amount, delivery, total;
    int distance;

    printf("Enter shopping amount: ");
    scanf("%f", &amount);

    printf("Enter delivery distance (km): ");
    scanf("%d", &distance);

    if (amount <= 0 || distance <= 0)
    {
        printf("Invalid Input\n");
    }
    else
    {
        if (amount >= 5000)
        {
            delivery = 0;
        }
        else if (distance <= 5)
        {
            delivery = 150;
        }
        else if (distance <= 10)
        {
            delivery = 250;
        }
        else if (distance <= 20)
        {
            delivery = 400;
        }
        else
        {
            delivery = 600;
        }

        total = amount + delivery;

        printf("\nShopping Amount   : Rs. %.2f\n", amount);
        printf("Delivery Charges  : Rs. %.2f\n", delivery);
        printf("Total Payable     : Rs. %.2f\n", total);
    }

    return 0;
}