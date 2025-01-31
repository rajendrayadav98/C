#include <stdio.h>
    // write c programe of given pattern
    // E E E E E
    // D D D D D
    // C C C C C
    // B B B B B
    // A A A A A 
    int main() {
    for(int i='E';i>='A';i--){
    for(int j='E';j>='A';j--){
    printf("%2c",i);
    }
    printf("\n");
    }
    return 0;
    }