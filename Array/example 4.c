// Write a program in C to copy the elements of one array into another array.

// Sample input :
// element - 0 : 15
// element - 1 : 10
// element - 2 : 12


// Sample output :
// The elements stored in the first array are :15 10 12
// The elements copied into the second array are :15 10 12


#include <stdio.h>

int main() {
    int a1[3],a2[3];
    for(int i=0;i<3;i++){
        printf("element- %d : ",i);
        scanf("%d",&a1[i]);
    }
    for(int i=0;i<3;i++){
        a1[i]=a1[i];
    }
    printf("The elements stored in the first array are : ");
    for(int i=0;i<3;i++){
        printf("%2d",a1[i]);
    }
    printf("\n");
    printf("The elements copied into the second array are : ");
    for(int i=0;i<3;i++){
        printf("%2d",a1[i]);
    }
    printf("\n");
    return 0;
}