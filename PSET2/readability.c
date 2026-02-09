#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

float count_words(string text);
float count_letters(string text);
float count_sentences(string text);

int main(void)
{
    string text = get_string("Text: ");
    float words;
    float letters;
    float sentences;
    float grade_level;
    words = count_words(text);
    letters = count_letters(text);
    sentences = count_sentences(text);
    grade_level = 0.0588 * ((letters/words)*100) - 0.296 * ((sentences/words)*100) - 15.8;
    grade_level = round(grade_level);
    if (grade_level >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (grade_level < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", (int) grade_level);
    }
}

float count_words(string text)
{
    float words = 1;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == ' ')
        {
            words += 1;
        }
    }
    return words;
}

float count_letters(string text)
{
    float letters = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]))
        {
            letters += 1;
        }
    }
    return letters;
}

float count_sentences(string text)
{
    float sentences = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentences += 1;
        }
    }
    return sentences;
}