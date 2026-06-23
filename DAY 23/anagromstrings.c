#include <stdio.h>
#include <string.h>

#define CHAR 256

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Not Anagrams\n");
        return 0;
    }

    int count[CHAR] = {0};
    for (int i = 0; str1[i]; i++) {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }

    for (int i = 0; i < CHAR; i++) {
        if (count[i] != 0) {
            printf("Not Anagrams\n");
            return 0;
        }
    }
    printf("Strings are Anagrams\n");
    return 0;
}
