/*Jesseca Wirtz - IT-FP2240 - u2a1 - Part 3
 *5/7/20
 */

 #include <stdio.h>

 main()
 {

    //declare variables to be used
    float distance;
    int numOfPassengers;
    char yesOrNo;
    float distanceCost;
    int extraPassengers;
    float extraPassCost;
    float totalPassCost;
    float basePassCost;
    float airportCharge;
    float totalCost;

    //prompt the user to enter number of miles and save it to distance
    printf("How far do you need to go?\n");
    printf("Enter answer in miles. (Example: 5.2): \n");
    scanf(" %f", &distance);

    //prompt the user to enter the number of passengers and save it
    printf("How many passengers are there? \n");
    scanf(" %d", &numOfPassengers);

    //prompt the user to enter if they are going to the airport and save it
    printf("Are you going to the airport? Enter Y for Yes or N for No. \n");
    scanf(" %c", &yesOrNo);

    //multiplying the distance by 1.8 to get the distance cost.
    //if it is less than 5, it is set to 3.5
    distanceCost = distance * 1.80;
    if (distanceCost < 5.00)
    {
        distanceCost = 3.50;
    }

    //if the number of passengers is greater than 2, multiply the extra
    //passengers by .5 to get the cost for them and set the first two
    //passengers total to 1.00.
    //If there are two passengers, set the passenger cost to $1.00
    //If there is only 1 passenger, no passenger cost is set
    if (numOfPassengers > 2)
    {
        extraPassengers = numOfPassengers - 2;
        extraPassCost = extraPassengers * .50;
        basePassCost = 1.00;
        totalPassCost = basePassCost + extraPassCost;
    }
    else if (numOfPassengers > 1)
    {
        totalPassCost = 1.00;
    }
    else
    {
        totalPassCost = 0.00;
    }

    //if the user types 'Y', they are charged $2.00
    //if the user types 'N', they are not charged
    if (yesOrNo == 'Y')
    {
        airportCharge = 2.00;
    }
    else
    {
        airportCharge = 0.00;
    }

    //adding the total costs together to get the total and outputting it
    totalCost = totalPassCost + distanceCost + airportCharge;
    printf("\n\n");
    printf("Your total cost for this trip is $%.2f.\n\n\n", totalCost);

    return 0;
 }
