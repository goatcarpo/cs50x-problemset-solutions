#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else if (argc == 2)
    {
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            if (isdigit(argv[1][i]) == false)
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }

        int k;
        string plaintext;
        int caesar;
        k = atoi(argv[1]);
        k = k % 26;
        printf("plaintext:  ");
        plaintext = get_string("");
        string ciphertext = plaintext;
        for (int j = 0; j < strlen(plaintext); j++)
        {
            if (isalpha(plaintext[j]) && isupper(plaintext[j]))
            {
                caesar = plaintext[j] + k;
                if (caesar > 90)
                {
                    ciphertext[j] = caesar - 26;
                }
                else
                {
                    ciphertext[j] = plaintext[j] + k;
                }
            }
            else if (isalpha(plaintext[j]) && islower(plaintext[j]))
            {
                caesar = plaintext[j] + k;
                if (caesar > 122)
                {
                    ciphertext[j] = caesar - 26;
                }
                else
                {
                    ciphertext[j] = plaintext[j] + k;
                }
            }
            else
            {
                ciphertext[j] = plaintext[j];
            }
        }
        printf("ciphertext: ");
        printf("%s\n", ciphertext);
    }
}