#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,guess,nguesses=1;
    srand(time(0));//to generate a random number at different time
    number = rand()%100 + 1;// Generates a random number beatween 1 to 100
    //printf("The number is %d\n",number);
    //keep running the loop until nymber is guessed
    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("Enter Lower Number Please!\n");
        }
        else if(guess<number){
            printf("Enter Higher Number Please!\n");
        }
        else{
            printf("You guess the number in %d attempts \n",nguesses);
        }
        nguesses++;
    }while(guess!=number);
    return 0;
}

