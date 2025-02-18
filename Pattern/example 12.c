// write the c programme
// 1
// 12
// 123
// 1234
// 12345
// 1234
// 123
// 12
// 1

#include <stdio.h>
int main() {
    int n=5;
    for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
    printf("%2d",j);
    }
    printf("\n");
    }
    for(int i=5;i>=1;i--){
    for(int j=1;j<i;j++){
    printf("%2d",j);
    }
    printf("\n");
    }

    return 0;
}