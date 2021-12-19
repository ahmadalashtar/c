#include <stdio.h>
#include <math.h>
int main(int argc, char **argv)
{
    int max,min,tries,guess,guessed,end;
    int curtr = 0;
    printf("Max: ");
    scanf("%d",&max);
    printf("Min: ");
    scanf("%d",&min);
    if (max < min){
        printf("max and min error");
        return 0;
    }
    tries = round((max-min)*0.1);
    guess = rand() % (max - min + 1) + min;
    while (end==0) {
        if (tries <= curtr){
            printf("Lost, number: %d",guess);
            end = 1;
        }
        else { //has guesses left
            printf("enter your guess: ");
            fflush(stdin);
            scanf("%d",&guessed);
            if ((guessed > max) || (guessed < min)){
                printf("not in range\n");
            }
            else { //in range
                if (guessed == guess){
                    printf("you win, guesses: %d",tries);
                    end = 1;
                }
                else if (guessed < guess){
                    printf("your number is smaller\n");
                    curtr+=1;
                }
                else {
                    printf("your number is larger\n");
                    curtr+=1;
                }
            }        
        }
    }
    
    return 0;
}
