
// write the c programe of given pattern

// 1 0 1 0 1
// 0 1 0 1 0
// 1 0 1 0 1
// 0 1 0 1 0
// 1 0 1 0 1

#include <stdio.h>
    int main() {
    for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
    printf("%2d",(i+j)%2);
    }
    printf("\n");
    }
    return 0;
    }