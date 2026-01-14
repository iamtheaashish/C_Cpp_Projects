#include <stdio.h>
#include <stdlib.h>

void printBoard();
int checkWin();

char board[] = {'0','1','2','3','4','5','6','7','8','9'};

int main(void){
    int player = 1, input, status = -1;

    printBoard();

    while(status == -1){
        player = (player % 2 == 0) ? 2 : 1;
        char mark = (player == 1) ? 'X' : 'O';

        printf("Player %d, enter a number: ", player);
        scanf("%d", &input);

        if(input < 1 || input > 9 || board[input] == 'X' || board[input] == 'O'){
            printf("Invalid move! Try again.\n");
            continue;
        }

        board[input] = mark;
        printBoard();

        status = checkWin();
        if(status == 1){
            printf("🎉 Player %d wins!\n", player);
            return 0;
        } else if(status == 0){
            printf("🤝 Draw!\n");
            return 0;
        }

        player++;
    }
    return 0;
}

void printBoard(){
    system("clear");
    printf("\n=== TIC TAC TOE ===\n\n");
    printf(" %c | %c | %c \n", board[1], board[2], board[3]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[4], board[5], board[6]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n\n", board[7], board[8], board[9]);
}

int checkWin(){
    int wins[8][3] = {
        {1,2,3},{4,5,6},{7,8,9},
        {1,4,7},{2,5,8},{3,6,9},
        {1,5,9},{3,5,7}
    };

    for(int i=0;i<8;i++){
        if(board[wins[i][0]] == board[wins[i][1]] &&
           board[wins[i][1]] == board[wins[i][2]])
            return 1;
    }

    for(int i=1;i<=9;i++){
        if(board[i] != 'X' && board[i] != 'O')
            return -1;
    }
    return 0;
}
