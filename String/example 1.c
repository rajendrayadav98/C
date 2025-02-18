// Write a C program to print the reverse of a given String .

// Example :
// Sample input  : "Welcome"
// Sample output : emocleW 


#include <stdio.h>
#include <string.h>

int main() {
    char s[100],i;
    printf("Sample input: ");
    scanf("%s",s);
    int l=strlen(s);
    printf("Sample reverse: ");
    for(i=l-1;i>=0;i--)
    printf("%c",s[i]);
   
    return 0;
}