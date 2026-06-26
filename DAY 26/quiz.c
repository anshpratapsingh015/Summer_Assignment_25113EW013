#include <stdio.h>
int main(){
    int answer, score = 0;

    printf("1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Chennai\n4. Kolkata\n");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("2. How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    scanf("%d", &answer);

    if(answer == 3)
        score++;

    printf("3. Which language is used for C programming?\n");
    printf("1. English\n2. C\n3. Java\n4. Python\n");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("Final Score = %d/3", score);

    return 0;
}
