#include <stdio.h>

int main()
{
    float balance = 50000;
    float deposit, withdraw;
    int choice;

    printf(" ATM MENU \n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Your current balance is: Rs. %.2f\n", balance);
            break;

        case 2:
            printf("Enter amount to deposit: ");
            scanf("%f", &deposit);
            balance = balance + deposit;
            printf("Updated balance is: Rs. %.2f\n", balance);
            break;

        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%f", &withdraw);
            if (withdraw <= balance)
            {
                balance = balance - withdraw;
                printf("Remaining balance is: Rs. %.2f\n", balance);
            }
            else
            {
                printf("Insufficient Balance\n");
            }
            break;

        case 4:
            printf("Thank you for using the ATM\n");
            break;

        default:
            printf("Invalid Option\n");
    }

    return 0;
}