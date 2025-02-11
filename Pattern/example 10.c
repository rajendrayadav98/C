// Write the c programe of given pattern 
// A B A B A
// B A B A B
// A B A B A
// B A B A B
// A B A B A
#include <stdio.h>
int main() {
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
        if((i+j )% 2 != 0)
        printf("%3c",'B');
        else{
            printf("%3c",'A');
        }
        }
        printf("\n");
    }

    return 0;
}