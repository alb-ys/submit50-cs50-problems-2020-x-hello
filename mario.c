#include <cs50.h>
#include <stdio.h>

int main(void)
{

//declare variables
    int h;
    bool con = false;

//input appropriate number
    do
    {
        h = get_int("enter an mumber from 1 to 9: ");

        if (h < 1 || h > 9)
        {
            printf("invalid number try again; \n");
            con = false;
        }

        else
        {
            con = true;
        }
    }
    while (con == false);

//draw half pyramid

//establish row indexing
    for (int row = 0; row < h; row++)
    {

//print spaces
        for (int space = 1; space < h - row; space++)
        {
            printf(" ");
        }

//print hashes
        for (int hash = -1; hash < row + 1; hash++)
        {
            printf("#");
        }
//new line, return to beginning of loop
    printf("\n");
    }

}
