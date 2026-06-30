#include <stdio.h>

void displayResult(int roll[], char name[][50], int marks[], int n){
    int topper = 0;

    printf("\nStudent Results\n");

    for(int i = 0; i < n; i++){
        printf("Roll No: %d\n", roll[i]);
        printf("Name: %s\n", name[i]);
        printf("Marks: %d\n", marks[i]);
        printf("Percentage: %.2f\n\n", marks[i] / 5.0);

        if(marks[i] > marks[topper])
            topper = i;
    }

    printf("Topper Details\n");
    printf("Roll No: %d\n", roll[topper]);
    printf("Name: %s\n", name[topper]);
    printf("Marks: %d\n", marks[topper]);
}

int main(){
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    int roll[n];
    char name[n][50];
    int marks[n];

    for(int i = 0; i < n; i++){
        printf("Enter Roll No: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Total Marks (out of 500): ");
        scanf("%d", &marks[i]);
    }

    displayResult(roll, name, marks, n);

    return 0;
}
