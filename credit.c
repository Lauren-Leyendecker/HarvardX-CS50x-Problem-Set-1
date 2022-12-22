#include <cs50.h>
#include <stdio.h>

void check_card(long l);

int main(void)
{
    long  l = get_long("Number: ");
    check_card(l);
}

// checks to make sure the credit card number entered by the user is valid
void check_card(long l)
{
    int digits = 0;
    long copy = l;
    int sum1 = 0;
    int sum2 = 0;
    int two_digit = 0;
    int final_sum = 0;
    // find the length of the credit card number
    while (copy > 0)
    {
        digits++;
        copy /= 10;
    }
    copy = l;
    // uses Luhn's algorithm on the credit card number
    while (copy > 0)
    {
        sum1 += copy % 10;
        copy /= 10;
        two_digit = 2 * (copy % 10);
        while (two_digit > 0)
        {
            sum2 += two_digit % 10;
            two_digit /= 10;
        }
        copy /= 10;
    }
    final_sum = sum1 + sum2;
    // checks to see if the number entered is a valid length, if not prints "INVALID"
    if (digits != 13 && digits != 15 && digits != 16)
    {
        printf("INVALID\n");
    }
    // checks if the last digit of the sum calculated using Luhn's algorithm is a 0, if not prints "INVALID"
    else if (final_sum % 10 != 0)
    {
        printf("INVALID\n");
    }
    else
    {
        long beginning_numbers = l;
        // gets the first two digits of the credit card number
        while (beginning_numbers > 100)
        {
            beginning_numbers /= 10;
        }
        // checks if the credit card is American Express
        if (beginning_numbers / 10 == 3 && (beginning_numbers % 10 == 4 || beginning_numbers % 10 == 7))
        {
            printf("AMEX\n");
        }
        // checks if the credit card is a MasterCard
        else if (beginning_numbers / 10 == 5 && (beginning_numbers % 10 >= 1 && beginning_numbers % 10 <= 5))
        {
            printf("MASTERCARD\n");
        }
        // checks if the credit card is a Visa
        else if (beginning_numbers / 10 == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
}