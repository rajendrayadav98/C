// Write a C program to check whether a character is uppercase or lowercase alphabet using if-else.

// Sample input  : char ch = 'A';
// Sample output : UpperCase

// Sample input  : char ch = 'b';
// Sample output : LoweCase


#include <stdio.h>

int main() {
    char ch;
    printf("enter any alphabet:");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z'){
        printf("Lowecase");
        
    }
   else if(ch>='A' && ch<='Z')
   {
    printf("Uppercase");
   }
    return 0;
}