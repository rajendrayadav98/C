// Write a program in C to calculate the length of a string using a pointer.
// -------

// Sample input : NareshIt26

// Sample output : The length of the given string NareshIt26 is : 10

#include <stdio.h>

int main() {
    char s[100],*p=s;
    printf("enter string:");
    scanf("%s",s);
    for( ;*p!='\0';p++){
        
    }
    printf("string lenght=%d",p-s);
    return 0;
}