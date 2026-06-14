#include <stdio.h>
int main() {
    int n, i;
   printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements of array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int largest, secondLargest;

    if(a[0] > a[1]) {
        largest = a[0];
        secondLargest = a[1];
    } else {
        largest = a[1];
        secondLargest = a[0];
    }

    for(i = 2; i < n; i++) {
        if(a[i] > largest) {
            secondLargest = largest;
            largest = a[i];
        } else if(a[i] > secondLargest && a[i] != largest) {
            secondLargest = a[i];
        }
    }

    printf("Second largest element = %d\n", secondLargest);

    return 0;
}
