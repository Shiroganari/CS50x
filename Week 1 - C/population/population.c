#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // TODO: Prompt for start size
    int start_size;

    do
    {
        start_size = get_int("Enter the population start size: ");
    }
    while (start_size < 9);


    // TODO: Prompt for end size
    int end_size;

    do
    {
        end_size = get_int("Enter the population end size: ");
    }
    while (end_size < start_size);


    // TODO: Calculate number of years until we reach threshold
    int current_size = start_size;
    int year_count = 0;

    while (current_size < end_size)
    {
        float new_lamas = current_size / 3;
        float pass_away = current_size / 4;
        current_size = current_size + (int)new_lamas - (int)pass_away;
        year_count++;
    }


    // TODO: Print number of years
    printf("Years: %d\n", year_count);
}