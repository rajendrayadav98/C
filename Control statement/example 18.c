// What will be the output of the following C program Snippet?
// -----------------------------------------------------------


// a). Hi 97.
// b). Hi a
// c). Hello 97 
// d). Hello a

// answer :- b). Hi a.

#include <stdio.h>
int main() {
    char ch = 'a';
    if(ch)
        printf("Hi %d ",ch);
    else 
        printf("Hello %d ",ch);
    return 0;
}