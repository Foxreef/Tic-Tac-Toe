#include <stdio.h>
#include <string.h>

// Menu
void output_menu();
void input_menu();
void howToPlay_menu();
void openGithub_menu();

// Game
void loop_game();
void output_game();
void input_game();
void checkForWin_game();
void displayWinner_game();
char board_game[9];
char playerOnTurn_game;
char winner_game;

int main()
{

    output_menu();
    input_menu();
}

// Main Menu

void output_menu()
{
    system("cls");
    system("Title Tic Tac Toe");

    printf("  _____   _            _____                    _____                \n");
    printf(" |_   _| (_)   ___    |_   _|   __ _    ___    |_   _|   ___     ___ \n");
    printf("   | |   | |  / __|     | |    / _` |  / __|     | |    / _ \\   / _ \\\n");
    printf("   | |   | | | (__      | |   | (_| | | (__      | |   | (_) | |  __/\n");
    printf("   |_|   |_|  \\___|     |_|    \\__,_|  \\___|     |_|    \\___/   \\___|");
    printf(" v2.0\n\n\n");
    printf(" 1. Start\n\n");
    printf(" 2. Github\n\n");
    printf(" 3. Exit\n\n");
    printf("Choose an option: ");
}

void input_menu()
{
    char input;
    while (1 == 1)
    {
        scanf("%c", &input);
        if (input == '1')
        {
            loop_game();
        }
        else if (input == '2')
        {
            openGithub_menu();
        }
        else if (input == '3')
        {
            system("cls");
            return;
        }
        else
        {
            output_menu();
        }
    }
}

void howToPlay_menu()
{
}

void openGithub_menu()
{
    system("start www.Github.com/Foxreef/Tic-Tac-Toe");
}

// Game

void loop_game()
{
    int i;

    winner_game = 0;
    playerOnTurn_game = 'X';

    for (i == 0; i < 9; i++)
    {
        board_game[i] = i + '1';
    }

    while (winner_game == 0)
    {
        output_game();
        input_game();
        if (playerOnTurn_game == 'X')
        {
            playerOnTurn_game = 'O';
        }
        else
        {
            playerOnTurn_game = 'X';
        }
        checkForWin_game();
    }
    displayWinner_game();
}

void output_game()

{
    system("cls");
    printf("\n");
    printf("       |      |      \n");
    printf("    %c  |   %c  |  %c \n", board_game[0], board_game[1], board_game[2]);
    printf("       |      |      \n");
    printf(" ------|------|------\n");
    printf("       |      |      \n");
    printf("    %c  |   %c  |  %c \n", board_game[3], board_game[4], board_game[5]);
    printf("       |      |      \n");
    printf(" ------|------|------\n");
    printf("    %c  |   %c  |  %c \n", board_game[6], board_game[7], board_game[8]);
    printf("       |      |      \n\n\n Player %c, choose an open field.\n", playerOnTurn_game);
}

void input_game()
{
    int i;
    char input;
    while (1 == 1)
    {
        scanf("%c", &input);
        if (input == '1' || input == '2' || input == '3' || input == '4' || input == '5' || input == '6' || input == '7' || input == '8' || input == '9')
        {
            for (i = 0; i < 9; i++)
            {
                if (board_game[i] == input)
                {
                    board_game[i] = playerOnTurn_game;
                    return;
                }
            }
        }
        output_game();
    }
}

void checkForWin_game()
{
    if ((board_game[0] == 'X' && board_game[1] == 'X' && board_game[2] == 'X') || (board_game[0] == 'O' && board_game[1] == 'O' && board_game[2] == 'O'))
    {
        winner_game = board_game[0];
    }
    else if ((board_game[3] == 'X' && board_game[4] == 'X' && board_game[5] == 'X') || (board_game[3] == 'O' && board_game[4] == 'O' && board_game[5] == 'O'))
    {
        winner_game = board_game[3];
    }
    else if ((board_game[6] == 'X' && board_game[7] == 'X' && board_game[8] == 'X') || (board_game[6] == 'O' && board_game[7] == 'O' && board_game[8] == 'O'))
    {
        winner_game = board_game[6];
    }
    else if ((board_game[0] == 'X' && board_game[3] == 'X' && board_game[6] == 'X') || (board_game[0] == 'O' && board_game[3] == 'O' && board_game[6] == 'O'))
    {
        winner_game = board_game[0];
    }
    else if ((board_game[1] == 'X' && board_game[4] == 'X' && board_game[7] == 'X') || (board_game[1] == 'O' && board_game[4] == 'O' && board_game[7] == 'O'))
    {
        winner_game = board_game[1];
    }
    else if ((board_game[2] == 'X' && board_game[5] == 'X' && board_game[8] == 'X') || (board_game[2] == 'O' && board_game[5] == 'O' && board_game[8] == 'O'))
    {
        winner_game = board_game[2];
    }
    else if ((board_game[0] == 'X' && board_game[4] == 'X' && board_game[8] == 'X') || (board_game[0] == 'O' && board_game[4] == 'O' && board_game[8] == 'O'))
    {
        winner_game = board_game[0];
    }
    else if ((board_game[2] == 'X' && board_game[4] == 'X' && board_game[6] == 'X') || (board_game[2] == 'O' && board_game[4] == 'O' && board_game[6] == 'O'))
    {

        winner_game = board_game[2];
    }
    else if (board_game[0] != '1' && board_game[1] != '2' && board_game[2] != '3' && board_game[3] != '4' && board_game[4] != '5' && board_game[5] != '6' && board_game[6] != '7' && board_game[7] != '8' && board_game[8] != '9')
    {
        winner_game = 'N';
    }
}

void displayWinner_game()
{
    system("cls");
    if (winner_game != 'N')
    {
        printf("\n Player %c has won.\n", winner_game);
    }
    else
    {
        printf("\n No one has won.\n");
    }
    printf(" Press any Key to go to the Menu.");
    system("pause >NUL");
}