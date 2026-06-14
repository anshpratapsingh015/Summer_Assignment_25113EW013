#include <stdio.h>
int main() {
    int n,i;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements of array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int element;
    printf("Enter the element to be searched: ");
    scanf("%d", &element);

    int found = 0;

    for(i=0; i<n;i++) {
        if(element == a[i]) {
            printf("Element found at location %d\n",i+1);
            found=1;
            break;
        }
    }
    if(found == 0) {
        printf("Element not found\n");
    }

    return 0;
}
