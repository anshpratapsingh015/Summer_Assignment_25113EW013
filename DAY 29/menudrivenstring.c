#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int choice;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("1. Find Length\n");
    printf("2. Reverse String\n");
    printf("3. Convert to Uppercase\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            printf("Length = %d", strlen(str));
            break;

        case 2:
            for(int i = strlen(str) - 1; i >= 0; i--)
                printf("%c", str[i]);
            break;

        case 3:
            for(int i = 0; str[i] != '\0'; i++){
                if(str[i] >= 'a' && str[i] <= 'z')
                    str[i] = str[i] - 32;
            }
            printf("%s", str);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
