/**
 * pennies.c
 * @author Rolando Cruz
 *
 * Computes the amount in dollars that the user will receive if the initial
 * amount they have provided is doubled every day for a specified number
 * of days
 *
 * Based on Arvie Angeles' implementation in:
 * https://github.com/arvieangeles/CS50/blob/master/pennies.c
 *
 * @requires The CS50 Library: https://manual.cs50.net/library/ 
 */

#include <stdio.h>
#include <cs50.h>
#include <math.h>


int
main (void)
{
    int days = 0;
    long long int sum = 0, initial = 0;
    do {
        printf("Days in month: ");
        days = GetInt();
    } while (days > 31 || days < 28);
    
    printf("Pennies on first day: ");
    initial = GetInt();

    sum = initial;
    for (int i = 1; i < days; i++) {
        sum += sum * 2;
    }
    
    printf("$%0.2f\n", sum / 100.0);
   
}
