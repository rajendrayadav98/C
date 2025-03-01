// Write a C program to input an amount from the user and print the minimum number of notes (Rs. 500, 100, 50, 20, 10, 5, 2, 1) required for that amount. This program calculates the minimum number of notes needed for a given amount in C programming. It determines the minimum number of notes required for each denomination.

// Note :- The program should not print any denomination if its count is zero.
// -------

// Input :-
// --------
// Enter the amount: 1275

// Output :-
// ----------
// -> Rs. 500 notes: 2
// -> Rs. 100 notes: 2
// -> Rs. 50 notes: 1
// -> Rs. 20 notes: 1
// -> Rs. 5 coins: 1

#include<stdio.h>
int main(){
    int amount;
      printf("Enter the amount : ");
      scanf("%d",&amount);

      if(amount>500){
        printf("\n500 notes : %d",amount/500);
        amount=amount%500;
      }

      
      if(amount>100){
        printf("\n100 notes : %d",amount/100);
        amount=amount%100;
      }

      
      if(amount>50){
        printf("\n50 notes : %d",amount/50);
        amount=amount%50;
      }
      if(amount>20){
        printf("\n20 notes : %d",amount/20);
        amount=amount%20;
      }
     
      if(amount>=5){
        printf("\n5 coins : %d",amount/5);
        
      }
     return 0;
      }