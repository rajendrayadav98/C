#include <stdio.h>
    // Write c programe to given patter.
    //   1 0 1 0 1 0
    //   0 1 0 1 0 1
    //   1 0 1 0 1 0
    //   0 1 0 1 0 1
    //   1 0 1 0 1 0
int main() {
    int n=5;
    for(int i=1;i<=n;i++){
    for(int j=0;j<=n;j++){
    printf("%2d",(i+j)%2);
    }
    printf("\n");
    }
    return 0;
}