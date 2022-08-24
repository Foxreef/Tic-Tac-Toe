#include <stdio.h>
#include <string.h>

void output();
void input();
void checkForWin();

char board[9] = {'1','2','3','4','5','6','7','8','9'};
char playerOnTurn = 'X';
char winner = 0;

int main()
{
    system("cls");
    system("Title Tic Tac Toe - by Foxreef");

    while(winner == 0)
    {
        output();
        input();
        if(playerOnTurn == 'X')
        {
            playerOnTurn = 'O';
        }
        else
        {
            playerOnTurn = 'X';
        }
        checkForWin();
    }
}

void output()

{
    system("cls");
    printf("\n");
    printf("       |      |      \n");
    printf("    %c  |   %c  |  %c \n",board[0],board[1],board[2]);
    printf("       |      |      \n");
    printf(" ------|------|------\n");
    printf("       |      |      \n");
    printf("    %c  |   %c  |  %c \n",board[3],board[4],board[5]);
    printf("       |      |      \n");
    printf(" ------|------|------\n");
    printf("    %c  |   %c  |  %c \n",board[6],board[7],board[8]);
    printf("       |      |      \n\n\n Player %c, choose an open field.\n",playerOnTurn);
}

void input()
{
    int i;
    char input;
    while(1 == 1)
    {
        scanf("%c", &input);
        if(input == '1' || input == '2'|| input == '3' || input == '4' || input == '5' || input == '6' || input == '7' || input == '8' || input == '9')
        {
            for(i = 0; i < 9; i++)
            {
                if(board[i] == input)
                {
                    board[i] = playerOnTurn;
                    return;
                }
            }
        }
        output();
    }
}

void checkForWin() 
{
    if((board[0] == 'X' && board[1] == 'X' && board[2] == 'X') || (board[0] == 'O' && board[1] == 'O' && board[2] == 'O'))
    {
        printf("\nPlayer %c has won.", board[0]);
        winner = board[0];
    }
    else if((board[3] == 'X' && board[4] == 'X' && board[5] == 'X') || (board[3] == 'O' && board[4] == 'O' && board[5] == 'O'))
    {
        printf("\nPlayer %c has won.", board[3]);
        winner = board[3];
    }
    else if((board[6] == 'X' && board[7] == 'X' && board[8] == 'X') || (board[6] == 'O' && board[7] == 'O' && board[8] == 'O'))
    {
        printf("\nPlayer %c has won.", board[6]);
        winner = board[6];
    }
    else if((board[0] == 'X' && board[3] == 'X' && board[6] == 'X') || (board[0] == 'O' && board[3] == 'O' && board[6] == 'O'))
    {
        printf("\nPlayer %c has won.", board[0]);
        winner = board[0];
    }
    else if((board[1] == 'X' && board[4] == 'X' && board[7] == 'X') || (board[1] == 'O' && board[4] == 'O' && board[7] == 'O'))
    {
        printf("\nPlayer %c has won.", board[1]);
        winner = board[1];
    }
    else if((board[2] == 'X' && board[5] == 'X' && board[8] == 'X') || (board[2] == 'O' && board[5] == 'O' && board[8] == 'O'))
    {
        printf("\nPlayer %c has won.", board[2]);
        winner = board[2];
    }
    else if((board[0] == 'X' && board[4] == 'X' && board[8] == 'X') || (board[0] == 'O' && board[4] == 'O' && board[8] == 'O'))
    {
        printf("\nPlayer %c has won.", board[0]);
        winner = board[0];
    }
    else if((board[2] == 'X' && board[4] == 'X' && board[6] == 'X') || (board[2] == 'O' && board[4] == 'O' && board[6] == 'O'))
    {
        printf("\nPlayer %c has won.", board[2]);
        winner = board[2];
    }
    else if(board[0] != '1' && board[1] != '2' && board[2] != '3' && board[3] != '4' && board[4] != '5' && board[5] != '6' && board[6] != '7' && board[7] != '8' && board[8] != '9')
    {
        printf("\nNo one has won this game.");
        winner = 'N';
    }
}