#include <stdio.h>
int main(){
    int roll[5];
    char name[5][50];
    float marks[5];

    for(int i = 0; i < 5; i++){
        printf("Enter Roll No, Name and Marks: ");
        scanf("%d%s%f", &roll[i], name[i], &marks[i]);
    }

    printf("\nStudent Records\n");

    for(int i = 0; i < 5; i++){
        printf("%d %s %.2f\n", roll[i], name[i], marks[i]);
    }

    return 0;
}
