#include <stdio.h>
int main(){
    int n;

    printf("Enter order of matrix: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter matrix elements:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] != a[j][i]){
                printf("Matrix is not symmetric");
                return 0;
            }
        }
    }

    printf("Matrix is symmetric");

    return 0;
}
