#include <stdio.h>

int main() {
    int n, i, j, flag;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements of array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Duplicate elements are:\n");

    for(i = 0; i < n; i++) {
        flag = 0;

        for(j = 0; j < i; j++) {
            if(a[i] == a[j]) {
                flag = 1;
                break;
            }
        }

        if(flag == 0) {
            for(j = i + 1; j < n; j++) {
                if(a[i] == a[j]) {
                    printf("%d\n", a[i]);
                    break;
                }
            }
        }
    }

    return 0;
}
