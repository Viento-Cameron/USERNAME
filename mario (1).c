#include <stdio.h>
#include <cs50.h>

void print_spaces(int num);
void print_hashes(int num);




int main(void)
{
    int height, spaces, hashes;

    do
    {
        height = get_int("Enter a number between 0 and 8: ");
    }
    while(height < 0 || height > 8);

    spaces = height - 1;
    hashes = 2;

    for (int i = 0; i < height; i++)
    {
        print_spaces(spaces);
        print_hashes(hashes);
        printf("\n");
        spaces--;
        hashes++;
    }

}

void print_spaces(int num)
{
    for(int i = 0; i < num; i++)
    {
        printf(" ");
    }
}




void print_hashes(int num)
{
    for(int i = 0; i < num; i++)
    {
        printf("#");
    }
}