#include<stdio.h>
int main()
{
    int choice;
    int balance-=0,amount;
    do{
        printf("\n1.Deposit\n2.Withdraw\n3.Check Balance\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%d",&amount);
                balance+=amount;
                printf("Deposited: %d\n",amount);
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f",&amount);
                if(amount>balance)
                {
                    printf("Insufficient balance\n");
                }
                else
                {
                    balance-=amount;
                    printf("Withdrawn: %d\n",amount);
                }
                break;
            case 3:
                printf("Current Balance: %d\n",balance);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }
    }while(choice!=4);
    return 0;
}