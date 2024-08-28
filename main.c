#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        return 1;
    }

    int cents = atoi(argv[1]);

    for (int quarters = 0; quarters <= cents / 25; quarters++)
    {
        int remain1 = cents - (quarters * 25);

        for (int dimes = 0; dimes <= remain1 / 10; dimes++)
        {
            int remain2 = remain1 - (dimes * 10);

            for (int nickels = 0; nickels <= remain2 / 5; nickels++)
            {
                int pennies = remain2 - (nickels * 5);

                printf("%d quarter(s), %d dime(s), %d nickel(s), %d pennie(s)\n", quarters, dimes, nickels, pennies);
            }
        }
    }

    return 0;
}
