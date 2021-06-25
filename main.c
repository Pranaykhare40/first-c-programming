// Program of a game: the player who guessed the correct number in minimum no of attempts will win the game.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,guess,nguesses=1;
    srand(time(0));
    number=rand()%100+1;
    printf("the number is %d",number);
    do{
        printf("guess the number \n");
        scanf("%d",&guess);
        if (guess>number){
            printf("lower number please!!");
        }
        else if (guess<number){
            printf("highier number please!!");
        }
        else{
            printf("you guessesd in %d attempts",nguesses);
        }
        nguesses++;
    }while(guess!=number);
    
}