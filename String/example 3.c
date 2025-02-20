// Write a c program to check the String is Palindrome  or Not .

// Sample input : madam

// Sample output : madam is a palindrome.

#include <stdio.h>
#include<string.h>
int main() {
    char s[100];
    int n;
    printf("enter string:");
    scanf("%s",&s);
    int length=0;
    for(int i=0;s[i]!='\0';i++){
        length++;
    }
    printf("\nlength :%d\n",length);
    int c=0;
    for(int i=0;i<length;i++){
         if (s[i]!=s[length-1-i]){
             c=1;
         }
    }
    if(c==0){
        printf("it's a pailindrome");
    }
    else
     printf("it's not a pailindrome");
    return 0;
}