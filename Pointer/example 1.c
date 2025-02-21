// Write a program in C to find the maximum number between two numbers using a pointer.
// -------

// Sample input : first number : 5
//                second number : 6

// Sample output : 6 is the maximum number.

#include <stdio.h>
int main() {
    int a,b,*p,*q;
    printf("enter value of a and b:");
    scanf("%d %d",&a,&b);
    p=&a,q=&b;
    //printf(a>b?"a is big":b>a?"b is big":"both are equal");
    if(*p>*q){
        printf("%d is maximum number.",*p);
    }
    else{
        printf("%d is maximum number.",*q);
    }
    //printf(*p>*q?"p is big":*q>*p?"q is big":"both are equal");
    return 0;
    }
