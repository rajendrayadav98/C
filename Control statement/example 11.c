// Write a C program to input the lengths of all sides of a triangle and check whether the triangle is valid.

// Validity Check :-
// ------------------
// 	-> The sum of side1 and side2 must be greater than side3.
// 	-> The sum of side1 and side3 must be greater than side2.
// 	-> The sum of side2 and side3 must be greater than side1.

// If all three conditions are true, the program should print "The triangle is valid." If any of the conditions are false, the program should print "The triangle is not valid."

// Sample Input :-
// ---------------
// Enter the lengths of the three sides of the triangle:
// -> Side 1: 3
// -> Side 2: 4
// -> Side 3: 5
// 3
// Sample Output :
// -----------------
// The triangle is valid.

// Sample Input :-
// ---------------
// Enter the lengths of the three sides of the triangle:
// -> Side 1: 1
// -> Side 2: 2
// -> Side 3: 3

// Sample Output :-
// ----------------
// The triangle is not valid.



#include <stdio.h>

int main() {
    float side1, side2, side3;

    
    printf("Enter the lengths of the three sides of the triangle:\n");
    printf("Side 1: ");
    scanf("%f", &side1);
    printf("Side 2: ");
    scanf("%f", &side2);
    printf("Side 3: ");
    scanf("%f", &side3);

    
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is not valid.\n");
    }

    return 0;
}