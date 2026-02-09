#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int one_point_letters(string answer);
int two_point_letters(string answer);
int three_point_letters(string answer);
int four_point_letters(string answer);
int five_point_letters(string answer);
int eight_point_letters(string answer);
int ten_point_letters(string answer);



int score_counter(int score, string answer, int length, int arr[], int points);

int main(void)
{
    int player1 = 0;
    int player2 = 0;
    string answer1 = get_string("Player 1: ");
    string answer2 = get_string("Player 2: ");

    for (int i = 0, n = strlen(answer1); i < n; i++)
    {
        answer1[i] = tolower(answer1[i]);
    }

    for (int i = 0, n = strlen(answer2); i < n; i++)
    {
        answer2[i] = tolower(answer2[i]);
    }

    player1 += one_point_letters(answer1);
    player2 += one_point_letters(answer2);

    player1 += two_point_letters(answer1);
    player2 += two_point_letters(answer2);

    player1 += three_point_letters(answer1);
    player2 += three_point_letters(answer2);

    player1 += four_point_letters(answer1);
    player2 += four_point_letters(answer2);

    player1 += five_point_letters(answer1);
    player2 += five_point_letters(answer2);

    player1 += eight_point_letters(answer1);
    player2 += eight_point_letters(answer2);

    player1 += ten_point_letters(answer1);
    player2 += ten_point_letters(answer2);

    if (player1 > player2)
    {
        printf("Player 1 wins!\n");
    }
    else if (player1 < player2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("It's a tie!\n");
    }
}



int score_counter(int score, string answer, int length, int arr[], int points)
{
    for (int i = 0, n = strlen(answer); i < n; i++)
    {
        for (int j = 0, k = length; j < k; j++)
        {
            if (arr[j] == answer[i])
            {
                score += points;
            }
        }
    }
    return score;
}



int one_point_letters(string answer)
{
    int one_point_letters[10] = {97,101,105,108,110,111,114,115,116,117};
    // score counter parameters: initial score, string, array length, array name, value of each array int in points
    return score_counter(0, answer, 10, one_point_letters, 1);
}

int two_point_letters(string answer)
{
    int two_point_letters[2] = {100, 103};
    return score_counter(0, answer, 2, two_point_letters, 2);
}

int three_point_letters(string answer)
{
    int three_point_letters[4] = {98,99,109,112};
    return score_counter(0, answer, 4, three_point_letters, 3);
}

int four_point_letters(string answer)
{
    int four_point_letters[5] = {102,104,118,119};
    return score_counter(0, answer, 5, four_point_letters, 4);
}

int five_point_letters(string answer)
{
    int five_point_letters[1] = {107};
    return score_counter(0, answer, 1, five_point_letters, 5);
}

int eight_point_letters(string answer)
{
    int eight_point_letters[2] = {106,120};
    return score_counter(0, answer, 2, eight_point_letters, 8);
}

int ten_point_letters(string answer)
{
    int ten_point_letters[2] = {113,122};
    return score_counter(0, answer, 2, ten_point_letters, 10);
}