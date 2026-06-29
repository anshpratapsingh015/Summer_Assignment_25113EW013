#include <stdio.h>
int main(){
    int n, choice, sum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("1. Display Array\n");
    printf("2. Find Sum\n");
    printf("3. Find Maximum\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            for(int i = 0; i < n; i++)
                printf("%d ", arr[i]);
            break;

        case 2:
            for(int i = 0; i < n; i++)
                sum += arr[i];
            printf("Sum = %d", sum);
            break;

        case 3:
        {
            int max = arr[0];
            for(int i = 1; i < n; i++){
                if(arr[i] > max)
                    max = arr[i];
            }
            printf("Maximum = %d", max);
            break;
        }

        default:
            printf("Invalid Choice");
    }

    return 0;
}
