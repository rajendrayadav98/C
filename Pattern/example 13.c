// Write the c programme
// 1
// 2  3
// 4  5  6
// 7  8  9  10
// 11 12 13
// 14 15
// 16
====================================
#include <stdio.h>
int n=4;
int k=1;
int main() {
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%3d",k++);
        }
        printf("\n");
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%3d",k++);
        }
        printf("\n");
    }
    return 0;
}