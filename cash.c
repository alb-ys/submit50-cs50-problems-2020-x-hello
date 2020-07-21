#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float change;
    int coins;
    do
    {
        change = get_float("Change owed: ");
    }

    while (change < 0);
change = change * 100;
change = round(change);
    do {coins = 1;}
    while (change >= 1);

    if (change - 25 >= 0)
     { coins++;}
    else if (change - 10 >= 0)
    { coins++;}
    else if (change - 5 >= 0)
    { coins++;}
    while (change - 1 >= 0)
    printf("%i\n", coins);
       
 }
