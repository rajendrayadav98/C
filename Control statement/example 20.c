// What will be the output of the following C program Snippet?
// -----------------------------------------------------------
// a) Branch 1
// b) Branch 2
// c) Branch 3
// d) Branch 4

// answer :- c) Branch 3


#include <stdio.h>
int main() {
    int x = 0, y = 10;
    if (x++ && y--) {
        if (y > x)
            printf("Branch 1\n");
        else
            printf("Branch 2\n");
    } else {
        if (x == 1)
            printf("Branch 3\n");
        else
            printf("Branch 4\n");
    }
    return 0;
}