#include <stdio.h>
    // write c programe of given pattern
//   E D C B A
//   E D C B A
//   E D C B A
//   E D C B A
//   E D C B A 
    int main() {
    for(int i='E';i>='A';i--){
    for(int j='E';j>='A';j--){
    printf("%2c",j);
    }
    printf("\n");
    }
    return 0;
    }