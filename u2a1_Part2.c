/*Jesseca Wirtz - IT-FP2240 - u2a1 - Part 2
 * 5/7/20
 */

#include <stdio.h>
#define OVERTIME 40
#define TAXLIMIT 600

main()
{

    //declare all the variables needed for the program
    //almost all are considered float points to hold the numbers
    //with decimal places
    int hours;
    float payRate;
    float grosspay;
    float totalTaxes;
    float netPay;
    float overtimeHours;
    float overtimePay;
    float weeklyPay;
    float aboveTaxLimit;
    float aboveTaxLimitAmount;
    float taxAmount;

    //prompt the user for their hours and wage
    printf("What is your hours worked this week?\n");
    scanf(" %d", &hours);

    printf("What is your hourly rate? (Example: 12.50)\n");
    scanf(" %f", &payRate);

    //if the users hours per week are over 40 this section is ran
    //it gets the overtime hours and the amount made during overtime
    //this number is added to the weekly pay of 40 * payRate
    //this gets the gross pay and is saved for later
    if (hours > OVERTIME)
    {
        overtimeHours = hours - OVERTIME;
        overtimePay = (overtimeHours * payRate) * 1.5;
        weeklyPay = (hours - overtimeHours) * payRate;
        grosspay = weeklyPay + overtimePay;
    }
    else
    {
        //if the user works less than 40 hours a week, this is ran
        grosspay = hours * payRate;
    }
    //if the users gross pay is above $600 this section is ran
    //it gets the amount to be taxed above $600 and the amount
    //to be taxed below $600 and adds them together to get the
    //total taxed out of the gross pay
    if (grosspay >= TAXLIMIT)
    {
        aboveTaxLimit = grosspay - TAXLIMIT;
        aboveTaxLimitAmount = aboveTaxLimit * .20;
        taxAmount = (grosspay - aboveTaxLimit) * .15;
        totalTaxes = taxAmount + aboveTaxLimitAmount;
    }
    else
    {
        //if the gross pay is less than $600, this is ran
        totalTaxes = grosspay * .15;
    }

    //the net pay is the gross pay minus the total taxed
    netPay = grosspay - totalTaxes;

    //outputs the gross pay, the taxes taken out, and the net pay
    printf("Your gross pay is $%.2f.\n", grosspay);
    printf("Total taxes taken out: $%.2f.\n", totalTaxes);
    printf("Your net pay is $%.2f.\n\n", netPay);

    return 0;

}
