
#include <stdio.h>
// print the patter
//  5 5 5 5 5
//  4 4 4 4 4
//  3 3 3 3 3
//  2 2 2 2 2
//  1 1 1 1 1

int main() {
    int n=5;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n;j++){
            printf("%2d",i);
        }
        printf("\n");
        
    }

    return 0;
}