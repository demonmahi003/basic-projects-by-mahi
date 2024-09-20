#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(0));

    int random_value = rand();
    int i;

    printf("%10s","rules\n");
    printf("1 = scissors\n");
    printf("2 = rock\n");
    printf("3 = paper\n\n");

 for (i=0;i<99;i++){
    int move;
    printf("make your move:");
    scanf("%d", &move);
    int cai = random_value%7;
    
    if ( cai <= 3){
        printf("scissors\n");
        if (move == 1){
            printf("draw\n");
        }
        else if( move == 2){
            printf("you win\n");
        }
        else if( move == 3){
            printf("you lose\n");
        }
    }
    else if (3 < cai <= 4){
        printf("rocks\n");
        if (move == 1){
            printf("you lose\n");
        }
        else if( move == 2){
            printf("draw\n");
        }
        else if( move == 3){
            printf("you win\n");
        }
    }
    else if (4 < cai <= 6){
        printf("paper\n");
        if (move == 1){
            printf("you win\n");
        }
        else if( move == 2){
            printf("you lose\n");
        }
        else if( move == 3){
            printf("draw\n");
        }
    } 
    }







}
