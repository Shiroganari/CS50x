#include <stdio.h>
#include <cs50.h>

int main()
{
    int height;

    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    for (int i = 1; i <= height; i++)
    {
        for (int j = height - i; j > 0; j--)
        {
            printf(" ");
        }

        for (int j = i; j > 0; j--)
        {
            printf("#");
        }

        printf("  ");

        for (int j = i; j > 0; j--)
        {
            printf("#");
        }

        printf("\n");
    }
}