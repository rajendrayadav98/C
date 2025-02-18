// Write a C program to count the number of alphabet present in a given String .

// Sample input  : Apple

// Sample output  : The count of alphabet is : 5

#include <stdio.h>
#include <string.h>

int main() {
    char s[100],n;
    printf("Sample input: ",n);
    scanf("%s",&n);
    int c=1;
    for(int  i=0;s[i]!='\0';i++)
    {   
        c++;
    }
    printf("The count of alphabet is :%d",c);
    return 0;
}