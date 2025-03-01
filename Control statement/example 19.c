// What will be the output of the following C program Snippet?
// -----------------------------------------------------------
// a). Compile time Error.
// b). Hello java
// c). Hi java 
// d). Hello java Hi java

// answer :- b). Hello java.


#include <stdio.h>
int main() {
    char name[] = "java";
    if(name) 
        printf("Hello %s ",name);
    else 
        printf("Hi %s ",name);
    return 0;
}