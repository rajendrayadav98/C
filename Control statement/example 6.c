// Write a C program to input any alphabet and check whether it is vowel or consonant using simple(if) only.

// Sample input  : char ch = 'A';
// Sample output : Vowel

// Sample input  : char ch = 'b';
// Sample output : Consonant


#include<stdio.h>
int main()
{
    char ch;
    printf("enter any alphabet");
    scanf("%c",&ch);
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
    {
        printf("vowel");
        return 0;
    }
    if(!(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')){ 
    printf("consonant");   
    }
    return 0;
}