#include <stdio.h>

int main() {
    int i,n,sum = 0;
    float avg;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];
 printf("Enter elements");

    for(i =0;i< n;i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    avg = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
