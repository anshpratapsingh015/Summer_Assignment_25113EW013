#include <stdio.h>
int main(){
    int ticketNo, seats;
    char name[50];
    float price, totalAmount;

    printf("Enter Customer Name: ");
    scanf("%s", name);

    printf("Enter Ticket Number: ");
    scanf("%d", &ticketNo);

    printf("Enter Number of Seats: ");
    scanf("%d", &seats);

    printf("Enter Price per Ticket: ");
    scanf("%f", &price);

    totalAmount = seats * price;

    printf("\nTicket Details\n");
    printf("Customer Name: %s\n", name);
    printf("Ticket Number: %d\n", ticketNo);
    printf("Seats Booked: %d\n", seats);
    printf("Total Amount: %.2f\n", totalAmount);

    return 0;
}
