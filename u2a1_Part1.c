/*Jesseca Wirtz - IT-FP2240 - u2a1 - Part 1
 *5/7/20
 */

#include <stdio.h>

int main(void)
{
    //declare the variables to be used to store numbers
    int firstNumber;
    int secondNumber;

    //outputs the purpose of the program
    printf("\nThis program determines if the 1st non-zero integer entered is evenly ");
    printf("divisible by the 2nd non-zero integer entered using the modulus operator.\n\n");

    //prompts the user to enter two numbers
    printf("Enter 2 integers separated by a space: ");
    //saves the numbers entered by the user to the variables declared
    scanf("%i %i", &firstNumber, &secondNumber);

    //states that if the numbers entered are 0, then they are invalid
    if(firstNumber == 0 || secondNumber == 0)
    {
        //prints out the error if the numbers are invalid
        printf("\nError - Neither number can be 0. Sorry!\n\n");
    }
    //if the numbers are valid, this section is ran
    else
    {
        //this is outputted if the first number is evenly divisible by the second number
        if(firstNumber % secondNumber == 0)
        {
            printf("%i is evenly divisible by %i.\n\n", firstNumber, secondNumber);
        }
        //this is outputted if the first number is not evenly divisible by the second number
        else
        {
            printf("%i is not evenly divisible by %i.\n\n", firstNumber, secondNumber);
        }
    }
    return 0;
}
