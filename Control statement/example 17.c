// What will be the output of the following C program Snippet?
// -----------------------------------------------------------
// a). Compilation Error.
// b). Hello 5
// c). Hello 2 
// d). Welcome 5
// answer :- b). Hello 5.

#include <stdio.h>
int main() {
    int i = 2;
    if(i = 5) -> 5 will be assigned to i and if(5) will be evaluated to true.
        printf("Hello %d ", i);
    else
        printf("Welcome %d ",i);
    return 0;
}