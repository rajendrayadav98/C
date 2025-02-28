// Write a C program that takes a month number (1-12) as input from the user and prints the number of days in that month using a if-else statement. If the user enters a number outside the range of 1-12, the program should display an error message.

// Explanation :-
// ---------------
// Use a switch statement to handle different cases for each month:

// -> For months with 31 days (January, March, May, July, August, October, December), display "31 days."
// -> For months with 30 days (April, June, September, November), display "30 days."
// -> For February (month 2), print "28 or 29 days (depending on leap year)," as February can have 28 or 29 days.

// For any invalid month number (not between 1 and 12), print "Invalid month number."

// Additional Considerations :-
// -----------------------------
// The program should handle user input and validate it using a switch-case structure. While there's no need for a leap year calculation in this basic program, note that leap years affect February’s day count.

// Sample Input and Output :-
// ---------------------------

// Sample input-1:  Enter Month 3
// -----------------
// Sample output-1: 31 days

// Sample input-2 :- Enter Month 2
// -----------------
// Sample output-2 :- 28 or 29 days (depending on leap year)
// -------------------

// Sample input 3 :- 11
// -----------------
// Sample output 3 :- 30 days
#include<stdio.h>
int main()
{
  int month;
  printf("enter the month number(1-12):");
  scanf("%d",&month);
  if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
    printf("31 days\n");
  }
  else if(month==4||month==6||month==9||month==11){
    printf("30 days\n");
  }
  else if(month==2){
    printf("28 or 29 days");
  }
  else{
    printf("invalid month number");
  }
    return 0;
}