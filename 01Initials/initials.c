#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string name = get_string();

    // int counter = 0;

    //print first initial
    printf("%c", toupper(name[0]));

    for (int i = 0; i < strlen(name); i++)
    {
        // creating space, +1 jumpt from empty space, false empty space !='\0'
        if (name [i] == ' ' && name[i + 1] != '\0')
        {
            printf("%c", toupper(name[i + 1]));
        }
    }

    // print initials
    printf("\n");
}

