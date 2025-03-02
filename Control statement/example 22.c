// Take input from the user for total runs, total innings, and total not outs.
// -> Calculate and display the batting average.
// -> Validate that the number of innings minus not outs is greater than 0. If not, the program should display an error message.
// -> Display the batting average rounded to two decimal places.

// Test Cases :-
// --------------

// Test Case 1 :-
// ----------------
// Total Runs: 1500
// Total Innings: 50
// Total Not Outs: 5
// Expected Batting Average: 33.33

// Test Case 2 :-
// --------------
// Total Runs: 2300
// Total Innings: 60
// Total Not Outs: 10
// Expected Batting Average: 46.00

// Constraints :-
// --------------
// The number of innings must be greater than the number of not outs.

// Sample Input :-
// --------------
// Enter the total runs scored: 1200
// Enter the total number of innings: 45
// Enter the total number of not outs: 3

// Sample Output :-
// ----------------
// The batting average is: 28.00


#include<stdio.h>
int main()
{
    int total_runs,total_innings,total_not_outs;
    printf("enter the total runs:");
    scanf("%d",&total_runs);
    printf("enter the total innings:");
    scanf("%d",&total_innings);
    printf("enter the not out players:");
    scanf("%d",&total_not_outs);
    float batting_average = total_runs/  (total_innings - total_not_outs);
    
    printf(" batting average is %.2f:",batting_average);
    return 0;
}