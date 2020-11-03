//Snake,water and Gun Game
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int snakeWaterGun(char you,char comp){
    //returns 1 if you win, -1 if you lose and 0 if draw
    if(you == comp){//condition for drew
        return 0;
    }
    //cases:sg,gs,sw,ws,gw,wg
    if(you=='s' && comp=='w'){
        return 1;
    }
    else if(you=='w' && comp=='s'){
        return -1;
    }
    if(you=='s' && comp=='g'){
        return -1;
    }
    else if(you=='g' && comp=='s'){
        return 1;
    }

    if(you=='g' && comp=='w'){
        return -1;
    }
    else if(you=='w' && comp=='g'){
        return 1;
    }
}
int main(){
    char you;
    char comp;
    srand(time(0));//to generate a random number at different time
    int number = rand()%100 + 1;// Generates a random number beatween 1 to 100

    if(number<33){
        comp='s';
    }
    else if(number>33 && number<66){
        comp='w';

    }
else{
        comp='g';

    }
//s->>Snake
//G->>Gun
//W->>Water
    printf("Enter 's' for Snake, 'w' for Water and 'g' for Gun\n");
    scanf("%c",&you);
    int result = snakeWaterGun(you,comp);
    printf("You choose %c and computer choose %c.",you,comp);
    if(result == 0){
        printf("Game draw\n");

    }
    else if(result == 1){
        printf("Congratulation!!!You Win....\n");

    }
    else {
        printf("You Lose....\n");

    }

    return 0;

}

