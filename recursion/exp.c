#include <cs50.h>
#include <stdio.h>

// Declare the recursion function
int expo(int, int);

// Declare the non recursive function
int exponr(int, int);

int main (void)
{

    // Variables to hold user input, 2 integer values
    int n, p;

    // Prompt user for an integer
    n = get_int("Integer: ");

    // Prompt user for power to raise integer to, making sure it is positive
    // Ideally though, a negative input should be accepted
    do
    {
        p = get_int("What power would you like to raise %i to: ", n);
    }
    while (p < 0);

    // Call the recursive function and store result in "result"
    // Print result
    int result = expo(n, p);
    printf("Result for recursive function: %i\n", result);

     // Call the non-recursive function and store result in "resultNR"
    // Print resultNR
    int resultNR = exponr(n, p);
    printf("Result for non-recursive function: %i\n", resultNR);
}

// A recursive function to obtain the result of a number
// raised to a power. Accepts 2 integers, first is the base
// number and the second is the power to raise it to. Returns
// the prooduct
int expo(int num, int power)
{
    // (Base Case 1) if num is raised to the zero power, return 1
    if (power == 0)
        return 1;
    // (Base Case 2) if num is raised to the 1st power, return 0
    else if (power == 1)
        return num;
    // use recursion
    else
        return (num * (expo(num, (power - 1))));

    /*
        if num is raised to zero power there are 2 lines of code being executed, 3 lines for a power of 1
        if num is being raised to a power > 1, lines of code ran depend on numbers entered
    */
}

// A non-recursive function to obtain the result of a number
// raised to a power, returns result
int exponr(int num, int power)
{
    // Initialze result, used to store product
    // Set to 1 becasue any number times itself is 1
    int result = 1;

    if (num <= 1)
        return num;

    // Use a for loop to multiply num by itelf as many
    // times as power
    for (int i = 1; i <= power; i++ )
       result *= num;

    // Return result
    return result;

    /*
        if num is raised to zero power there are 2 lines of code being executed, 3 lines for a power of 1
        if a power > 2 is entered, it'll take
    */
}

