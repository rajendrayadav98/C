// Write a C program to check whether a number is negative, positive, or zero.

// Sample input :Enter a number -> 10

// Sample output :10 is Positive number

// Sample input: Enter a number -> 0

// Sample output : The number you have entered is - zero

// Sample input :-Enter a number -> -2

// Sample output :- negative number

#include<stdio.h>
int main()
{
int num;
printf("enter the number:");
scanf("%d",&num);
if(num>0)
{
printf("%d psitive number",num);
}
if(num<0){
printf("%d negative number",num);}
if(num==0){
printf("%d zero number",num);}
return 0;
}
