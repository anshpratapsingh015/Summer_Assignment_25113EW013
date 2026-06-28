#include <stdio.h>
int main(){
    int accountNo;
    char name[50];
    float balance, deposit, withdraw;

    printf("Enter Account Number: ");
    scanf("%d", &accountNo);

    printf("Enter Account Holder Name: ");
    scanf("%s", name);

    printf("Enter Initial Balance: ");
    scanf("%f", &balance);

    printf("Enter Deposit Amount: ");
    scanf("%f", &deposit);

    balance += deposit;

    printf("Enter Withdrawal Amount: ");
    scanf("%f", &withdraw);

    if(withdraw <= balance)
        balance -= withdraw;
    else
        printf("Insufficient Balance\n");

    printf("\nBank Account Details\n");
    printf("Account Number: %d\n", accountNo);
    printf("Account Holder: %s\n", name);
    printf("Current Balance: %.2f\n", balance);

    return 0;
}
