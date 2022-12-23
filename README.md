# HarvardX-CS50x-Problem-Set-1
Three programs written in C for Problem Set 1 of the HarvardX CS50x Course.

hello.c: Asks the user for their name and prints "hello, (name)"

mario.c: Prompts the user to enter the height of the pyramid that will be printed until they enter a number between 1 and 8 (inclusive). Then prints a pyramid of the given height similar to the pyramid seen in the beginning of the World 1-1 in Nintendo's Super Mario Brothers using the '#' character.

credit.c: Promts the user to enter a credit card number until they enter a valid number and then checks to see if te number entered is an invald credit card number using Luhn's algorithm where you multiply every other digit by 2, starting with the number’s second-to-last digit, and then add those products’ digits together and then add the sum to the sum of the digits that weren’t multiplied by 2. If the total’s last digit is 0, the number is valid and if not then it is invalid. If the number entered does not have 13, 15, or 16 numbers, then it is also invalid. Once a number is initially deemed as valid, it is then determined if it is an American Express, MasterCard, or Visa card based on the first one or two digits entered. If the firts two numbers are 34 or 37, then the card is American Express (AMEX). If the first two numbers are, 51, 52, 53, 54, or 55, then the card is a MasterCard. If the first number is 4, then the card is a Visa. If the card number does not match any of these types of credit cards, then it is invalid.
