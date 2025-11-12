// bank app
// ask user for w (withdraw), d (deposit), c (check balance), e (exit)
// initial balance is 0
// if choose d ask for amount
// if choose w ask for amount
// if choose c show balance
// if choose e exit/terminate
 
#include <stdio.h>
#include <string.h>
 
int working()
{
    int balance = 0, amount;
    char ope[1];
 
    while (1)
    {
        printf("-----------------------------------------------------------------\n");
        printf("d / D (Deposit)\n");
        printf("w / W (Withdraw)\n");
        printf("c / C (Check Balance)\n");
        printf("e / E (Exit)\n");
 
        printf("Enter operation D, W, C, E: ");
        scanf(" %s", ope);
 
        if (strcmp("D", ope) == 0 || strcmp("d", ope) == 0)
        {
            printf("Enter amount to deposit: ");
            scanf("%d", &amount);
            balance += amount;
            printf("Amount is deposited successfully.\n");
        }
 
        else if (strcmp("W", ope) == 0 || strcmp("w", ope) == 0)
        {
            if (balance == 0)
            {
                printf("Make a deposit first. Your current balance is 0.\n");
            }
            else
            {
                printf("Enter amount to withdraw: ");
                scanf("%d", &amount);
 
                if (amount > balance)
                {
                    printf("Insufficient balance.\n");
                }
                else
                {
                    balance -= amount;
                    printf("Amount withdrawed successfully.\n");
                }
            }
        }
 
        else if (strcmp("C", ope) == 0 || strcmp("c", ope) == 0)
        {
            if (balance == 0)
            {
                printf("Make a deposit first. Your current balance is 0.\n");
            }
            else
            {
                printf("Your current balance is %d\n", balance);
            }
        }
 
        else if (strcmp("E", ope) == 0 || strcmp("e", ope) == 0)
        {
            if (balance == 0)
            {
                printf("Make a deposit first. Your current balance is 0.\n");
            }
            else
            {
                break;
            }
                }
 
        else
        {
            printf("Invalid operation. Enter a validd operation.");
        }
    }
 
    return 0;
}
 
int main()
{
    working();
    return 0;
}