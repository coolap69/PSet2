#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])

{
    // key from command line argument
    int key;

    //accepts 2 arguments
    // name of the program
    // pass in the key
    if (argc == 2)
    {
        printf("Key: %s\n", argv[1]);
    }
    else
        //returning an error if i don't use a letter after ./caesar
    {
        printf("Usage: ./caesar k \n");
        return 1;
    }

    //turn key into integer
    key = atoi(argv[1]);

    // prompt for plaintext
    string plaintext = get_string("Plaintext: ");
    {
        printf("ciphertext: ");
    }
    for (int i = 0; i < strlen(plaintext); i++)
    {
        if (!isalpha(plaintext[i]))
        {
            printf("%c", plaintext[i]);
        }
        else if (isupper(plaintext[i]))
        {
            printf("%c", (((plaintext[i] - 'A') + key) % 26 + 'A'));
        }
        ellse if (islower(plaintext[i]))
        {
            printf("%c", (((plaintext[i] - 'a') + key) % 26 + 'a'));
        }

    }
    printf("\n");

    //returning a 0 if there is no errors
    return 0;

}

// TODO
// get the key
// 2nd command line argument
// function atoi : from string to integer
// string num = "50";
// int i = atoi(num);

// get the plaintext
// encipher
// print ciphertext


// pseudocode
// get key from command line argument
// turn key into integer
// prompt for plaintext
// for each character in the plaintext string
// if aphabetic
// preserve case
// shift plaintext character by key
// print ciphertext
