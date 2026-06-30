#include <stdio.h>
int main(){
    int bookId[3];
    char bookName[3][50];

    for(int i = 0; i < 3; i++){
        printf("Enter Book ID and Book Name: ");
        scanf("%d%s", &bookId[i], bookName[i]);
    }

    printf("\nLibrary Records\n");

    for(int i = 0; i < 3; i++){
        printf("Book ID: %d  Book Name: %s\n", bookId[i], bookName[i]);
    }

    return 0;
}
