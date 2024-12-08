#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int random_number = rand()%100 + 1;
    int user_guess, tries = 0;
    printf("Guess a random number between 0 and 100.\n");
    do{
        tries++;
        printf("Enter a random guess.>>> ");
        scanf("%d", &user_guess);
        if (user_guess!=random_number){
            if(user_guess>random_number && user_guess-random_number < 10){
                printf("Incorrect guess. But you are so close to it. TRY ANOTHER SMALLER NUMBER!\n");
            }
            if(user_guess<random_number && random_number-user_guess < 10){
                printf("Incorrect guess. But you are so close to it. TRY ANOTHER LARGER NUMBER!\n");
            }
            else if(user_guess>random_number && !(user_guess-random_number < 10)){
                printf("Incorrect guess. Maybe try guessing a SMALLER number?\n");
            }
            else if(user_guess<random_number && !(random_number-user_guess < 10)){
                printf("Incorrect guess. Maybe try guessing a LARGER number?\n");
            }
        }
        else if(user_guess==random_number){
            if (tries==1){
            printf("Congratulations, your guess is correct. The number was indeed %d. It took you %d try.", random_number, tries);
            }
            else{
            printf("Congratulations, your guess is correct. The number was indeed %d. It took you %d tries.", random_number, tries);
            }
        }
    }while (user_guess != random_number);

    return 0;
}
