// Write a C Program to take the hours and minutes as input from the user and show whether it is AM or PM using an if-else statement.

// Test-Case-1:
// ------------
// Enter the hours (in 24-hour format): 10

// Enter the minutes: 30

// The time is 10:30 AM

// Test-Case-2:
// ------------
// Enter the hours (in 24-hour format): 19

// Enter the minutes: 45

// The time is 07:45 PM

#include<stdio.h>
int main()
{
  int hours,minutes;
  printf("enter the hours(in 24 hours formate):");
  scanf("%d", &hours);
  printf("enter the minutes");
  scanf("%d", &minutes);
  if(hours>=0 && hours<12){
    printf("the time is %d : %d AM",hours,minutes);
  }
  else if(hours>=12 && hours<24){
    printf("the time is %d : %d PM",hours-12,minutes);
  }
    
    return 0;
}