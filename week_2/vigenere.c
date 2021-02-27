#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int shift(char c)
{
    if (islower(c)) //small
    {
        c = c - 97;
    }
    if (isupper(c)) //big
    {
        c = c - 65;
    }
    return c;
}

int main(int argc, string argv[])
{
    string key = argv[1];
    if (argc != 2)
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }
    else
    {
        for (int i = 0, n = strlen(key); i < n; i++)
        {
            if (isalpha(key[i]) == 0)
            {
                printf("Usage: ./vigenere keyword\n");
                return 1;
            }
        }
        string text = get_string("plaintext: ");
        printf("ciphertext: ");

        int m;
        int a = 0;

        for (int j = 0, n = strlen(text); j < n; j++)
        {
            if (isalpha(text[j]) == 0)
            {
                char c = text[j];
                printf("%c", c);
                a++;
            }
            else
            {
                m = ((j - a) % strlen(key));

                if (islower(text[j])) //small
                {
                    char c = ((text[j] + shift(key[m]) - 97) % 26 + 97);
                    printf("%c", c);
                    m++;
                }
                else if (isupper(text[j])) //big
                {
                    char c = (text[j] + shift(key[m]) - 65) % 26 + 65;
                    printf("%c", c);
                    m++;
                }
            }
        }
    }

    printf("\n");
    return 0;
}