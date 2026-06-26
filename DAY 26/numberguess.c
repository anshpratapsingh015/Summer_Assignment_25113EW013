#include <stdio.h>
int main(){
    int number = 7, guess;

    do{
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if(guess > number)
            printf("Too High\n");
        else if(guess < number)
            printf("Too Low\n");
        else
            printf("Correct Guess\n");

    }while(guess != number);

    return 0;
}
