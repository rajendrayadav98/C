// Write a C program to read one character from user and convert it into upercase if given character is in lowercase otherwise convert itno lowercase using simple (if) only.
// Sample input  : char ch = 'A';
// Sample output : a
// Sample input  : char ch = 'b';
// Sample output : B 


#include<stdio.h>
int main()
{
    char ch;
    printf("enter the charector;");
    //printf("enter the  second no;");
    scanf("%c",&ch);
    
    if(ch>='a'&&ch<='z'){
        printf("%c",ch-32);
        return 0;
    }

if(ch>='A'&&ch<='Z')
    printf("%c",ch+32);
        
    
    return 0;
    
}
