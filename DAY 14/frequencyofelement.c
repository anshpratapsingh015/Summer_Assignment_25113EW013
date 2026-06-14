#include <stdio.h>
int main() {
    int n,i,element,count=0;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements of array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element whose frequency is to be found: ");
    scanf("%d", &element);

    for(i = 0; i < n; i++) {
        if(a[i] == element) {
            count++;
        }
    }

    printf("Frequency of %d = %d\n", element, count);

    return 0;
}
