#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};


// ASCII Values for small letters
int small_letters[] = {97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122};

// ASCII Values for capital letters
int capital_letters[] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90};

int temp_points[] = {};

int compute_score(char word[]);

int main(void)
{

    char word1[20];
    char word2[20];
    // Get input words from both players
    printf("Player 1: ");
    scanf("%s", &word1);
    system("clear");
    
    printf("Player 2: ");
    scanf("%s", &word2);
    system("clear");

    
    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner

    if(score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if(score2 > score1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }

    return 0;
}


int compute_score(char word[])
{
    int score = 0;

    for(int i = 0; i <= strlen(word); i++)
    {
        if(isupper(word[i]))
        {
            for(int f = 0; f < sizeof(capital_letters); f++)
            {
                if(word[i] == capital_letters[f])
                {
                    temp_points[i] = POINTS[f];
                    score += temp_points[i];
                }
            }
        }

        else if(islower(word[i]))
        {
            for(int f = 0; f < sizeof(small_letters); f++)
            {
                if(word[i] == small_letters[f])
                {
                    temp_points[i] = POINTS[f];
                    score += temp_points[i];
                }
            }
        }

        else
        {
            i += 1;
        }

    }

    return score;
}

