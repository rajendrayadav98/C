//  write the c programe of given pattern.

//      *
//     **
//    ***
//   ****
//  *****
//  *****
//   ****
//    ***
//     **
//      *   


#include <stdio.h>

int main() {
    for(int i=1;i<=5;i++){// i=3  1<=5
         for(int j=5;j>=i;j--){// j=5 1>=2
              printf(" ");
         } 
          for(int k=1;k<=i;k++){
               printf("*");
          }
         printf("\n");
     }
       for(int i=1;i<=5;i++){// i=4  4<=5
        for(int j=1;j<=i;j++){// j=1 1<=3
             printf(" ");
        }
        for(int k=5;k>=i;k--){
             printf("*");
        }
        printf("\n");
   }
    return 0;
}