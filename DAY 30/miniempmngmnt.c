#include <stdio.h>
int main(){
    int empId[3];
    char empName[3][50];
    float salary[3];

    for(int i = 0; i < 3; i++){
        printf("Enter Employee ID, Name and Salary: ");
        scanf("%d%s%f", &empId[i], empName[i], &salary[i]);
    }

    printf("\nEmployee Details\n");

    for(int i = 0; i < 3; i++){
        printf("%d %s %.2f\n", empId[i], empName[i], salary[i]);
    }

    return 0;
}
