#include <stdio.h>

int main() {
    int i,n,even=0,odd=0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];
printf("Enter elements:\n");

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++) {
        if(a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Number of even elements = %d\n", even);
    printf("Number of odd elements = %d", odd);

    return 0;
}
