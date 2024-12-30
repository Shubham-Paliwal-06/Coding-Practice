#include <stdio.h>
#include <conio.h>
#include <time.h>

int main()
{

    srand(time(0));
    int player, computer;
    int score_player = 0, score_computer = 0, n;
    char name[20];
    // 0 --> STONE
    // 1 --> PAPER
    // 2 --> SCISSOR

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter how many match you want to play: ");
    scanf("%d", &n);
    printf("Some important instructions:-\n1. Choose 0 for STONE.\n2. Choose 1 for PAPER.\n3. Choose 2 for SCISSOR.\n4. If you win you get 2 points.\n5. If you draw you get 1 point each.\n6. If you lose you don't get any points.\n\n");

    for (int i = 0; i < n; i++)
    {
        computer = rand() % 3;
        printf("Match no. %d\n", i + 1);
        printf("Choose your number: ");
        scanf("%d", &player);

        if (player == 0)
        {
            printf("%s has choosen STONE\n", name);
            if (computer == 0)
            {
                printf("Computer has choosen STONE\nIt's a draw.\n");
                score_computer++;
                score_player++;
            }
            else if (computer == 1)
            {
                printf("Computer has choosen PAPER\nComputer has won this match.\n");
                score_computer += 2;
            }
            else if (computer == 2)
            {
                printf("Computer has choosen SCISSOR\n%s has won this match.\n", name);
                score_player += 2;
            }
        }
        else if (player == 1)
        {
            printf("%s has choosen PAPER\n", name);
            if (computer == 0)
            {
                printf("Computer has choosen STONE\n%s has won this match.\n", name);
                score_player += 2;
            }
            else if (computer == 1)
            {
                printf("Computer has choosen PAPER\nIt's a draw.\n");
                score_computer++;
                score_player++;
            }
            else if (computer == 2)
            {
                printf("Computer has choosen SCISSOR\nComputer has won this match.\n");
                score_computer += 2;
            }
        }
        else if (player == 2)
        {
            printf("%s has choosen SCISSOR\n", name);
            if (computer == 0)
            {
                printf("Computer has choosen STONE\nComputer has won this match.\n");
                score_computer += 2;
            }
            else if (computer == 1)
            {
                printf("Computer has choosen PAPER\n%s has won this match.\n", name);
                score_player += 2;
            }
            else if (computer == 2)
            {
                printf("Computer has choosen SCISSOR\nIt's a draw.\n");
                score_computer++;
                score_player++;
            }
        }
        else
        {
            printf("Something went wrong. We will do our best to fi the bug.\n");
        }
        printf("\n\n");
    }
    printf("\n\n");
    printf("Your scores for %d matches are:-\nComputer - %d\n%s - %d\n", n, score_computer, name, score_player);
    if (score_computer == score_player)
    {
        printf("Game is a draw. Play Again!!\n");
    }
    else if (score_computer > score_player)
    {
        printf("Computer won the game.\n");
    }
    if (score_computer < score_player)
    {
        printf("%s won the game.\n", name);
    }
    

    return 0;
}