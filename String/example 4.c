// Write a C program to find out the sum of the numbers which is present in a given string.

// Sample input  : Enter a String : TS12ab345

// Sample output  : Sum Of the numbers is : 15

#include <stdio.h>
int main() {
    char s[100],n;
    printf("enter the string size:");
    scanf("%s",s);
    int sum=0;
    for(int i=0;s[i]!='\0';i++){
    if(s[i]>='0'&&s[i]<='9'){
        sum=sum+(s[i]-48);
    }
    }
    printf("sum  of number is:%d",sum);
    return 0;
}
