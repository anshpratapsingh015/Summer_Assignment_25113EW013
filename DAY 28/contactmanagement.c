#include <stdio.h>
int main(){
    char name[50];
    long long mobile;
    char email[50];

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Mobile Number: ");
    scanf("%lld", &mobile);

    printf("Enter Email: ");
    scanf("%s", email);

    printf("\nContact Details\n");
    printf("Name: %s\n", name);
    printf("Mobile Number: %lld\n", mobile);
    printf("Email: %s\n", email);

    return 0;
}
