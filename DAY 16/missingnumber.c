#include <stdio.h>
int main(){
    int arr[] = {1, 2, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int total = (n + 1) * (n + 2) / 2;
    int sum = 0;

    for(int i = 0; i<n; i++){
        sum += arr[i];
    }

    printf("Missing number = %d", total - sum);

    return 0;
}
