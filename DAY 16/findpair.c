#include <stdio.h>
int main(){
    int arr[] = {1, 4, 5, 7, 3, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 10;

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == sum){
                printf("Pair: %d %d", arr[i], arr[j]);
                return 0;
            }
        }
    }
    printf("No pair found");
    return 0;
}
