#include <stdio.h>

int main()
{
    float bill, discount, finalBill;
    int member;

    printf("Enter total bill amount: ");
    scanf("%f", &bill);

    printf("Are you a member? (1 = Yes, 0 = No): ");
    scanf("%d", &member);

    if (bill >= 5000)
    {
        if (member == 1)
        {
            discount = bill * 20 / 100;
        }
        else
        {
            discount = bill * 10 / 100;
        }
    }
    else
    {
        if (member == 1)
        {
            discount = bill * 10 / 100;
        }
        else
        {
            discount = 0;
        }
    }

    finalBill = bill - discount;

    printf("\nOriginal Bill   : Rs. %.2f\n", bill);
    printf("Discount Amount : Rs. %.2f\n", discount);
    printf("Final Payable   : Rs. %.2f\n", finalBill);

    return 0;
}