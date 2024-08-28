#include <stdio.h>

int main()
{
    int cents;
    scanf("%d", &cents);

    for (int quarters = cents / 25; quarters >= 0; quarters--)
    {
        int remain1 = cents - (quarters * 25);

        for (int dimes = remain1 / 10; dimes >= 0; dimes--)
        {
            int remain2 = remain1 - (dimes * 10);

            for (int nickels = remain2 / 5; nickels >= 0; nickels--)
            {
                int pennies = remain2 - (nickels * 5);
                printf("%d quarter(s), %d dime(s), %d nickel(s), %d pennie(s)\n", quarters, dimes, nickels, pennies);
            }
        }
    }

    return 0;
}
