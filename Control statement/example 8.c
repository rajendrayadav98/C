// Develop a C program that accepts an hour (in 24-hour format) as input and classifies the time of day as "Morning," "Afternoon," "Evening," or "Night." Implement this using a series of if statements. The program should also validate the input and display an error message if the entered hour is outside the valid range (0-23).

// Sample Input :-
// ---------------
// Enter the hour (24-hour format): 13

// Sample Output :-
// ----------------
// It's Afternoon.


#include <stdio.h>

int main() {
    int hours;
    printf("enter the hours(in 24-hour format):");
    scanf("%d",&hours);
    if(hours<0 ||  hours>=24){
        printf("invalid");
        return 0;
    }
    if(hours>=0 && hours<12){
        printf("good morning");
        return 0;
    }
    if(hours>=12 && hours<17)
   {
    printf("good ofternoon");
    return 0;
   }
   if(hours>=17 && hours<21)
   {
    printf("good evening");
    return 0;
   }
   else
    printf("good night");
   
   return 0;
}