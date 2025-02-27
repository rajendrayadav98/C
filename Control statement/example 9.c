// Write a C program to find the maximum among three numbers.

// Sample Input :- 
// ---------------
// Enter First Number -> 100
// Enter Second Number -> 200
// Enter Third Number -> 300

// Sample Output :- 
// -----------------
// Biggest Number is 300

#include<stdio.h>
int main()
{
 int num1,num2,num3;
 printf("enter the three number:");
 scanf("%d %d %d",&num1,&num2,&num3);
 if(num1>=num2&&num1>=num3)
 {
    printf("the  bigger number is :%d\n",num1);
 }
 if(num2>=num1&&num2>=num3)
 {
    printf("the bigger number is:%d\n",num2);
 }
 else
 {
    printf("the bigger number is:%d",num3);
 }
return 0;
}