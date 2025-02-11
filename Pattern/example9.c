// Write the c programe of given pattern.
// X O X O X
// O X O X O
// X O X O X
// O X O X O
// X O X O X

#include <stdio.h>
int main() {
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
        if((i+j )% 2 != 0)
        printf("%3c",'o');
        else{
            printf("%3c",'x');
        }
        }
        printf("\n");
    }

    return 0;
}