// Write a C function reverse_string(char *str) that takes a string str as input and returns the reversed string Using pointers.

// For example, if the input string is "hello", the function should return "olleh".

// Here's the function signature:

// char* reverse_string(char *str);
// =========================================================================================================================
// Write a C function unique_chars(char *str) that takes a string str as input and returns a new string containing only the unique characters in the original string Using Pointers.

// For example, if the input string is "hello", the function should return "helo".

// Here's the function signature:

// char* unique_chars(char *str);

#include <stdio.h>
#include <string.h>
int main() {
  char str[20];
  printf("enter string:",str);
  scanf("%s",&str);
  

  int length=strlen(str);
  char  temp;
  for(int i=0;i<length/2;i++){
      temp=str[i];
      str[i]=str[length-1-i];
      str[length-1-i]=temp;
  }
  printf("reverse: %s",str);
    return 0;
}