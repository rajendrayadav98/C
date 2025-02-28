// Write a C program to perform an arithmetic operation on two numbers using a switch case.
// Use operators (+, -, *, /, %) as cases, and prompt the user to select the type of operation they want to perform on the two numbers.

// Sample Input and Output :-
// ---------------------------

// Sample Input :-
// ----------------
// -> Enter num1: 10
// -> Enter num2: 20

// -> Enter operation: *

// Sample Output :-
// ----------------
// -> Multiplication is: 200

#include<stdio.h>
int main()
{
    int num1,num2;
    char op;
    printf("enter num1:");
    scanf("%d",&num1);
    printf("enter num2:");
    scanf("%d",&num2);
    printf("enter op:");
    scanf(" %c",&op);
    if(op=='+'){
        printf("addition is %d",num1+num2);
    }
     else if(op=='-'){
        printf("substraction is %d",num1-num2);
    }
     else if(op=='*'){
        printf("multiplication is %d",num1*num2);
        
    }
     else if(op=='/'){
        printf("devide is %d",num1/num2);
    }
     if(op=='%'){
        printf("modulus is %d",num1%num2);
    }
    return 0;
}