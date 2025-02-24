// Write a C function is_armstrong(int num) that takes 
// an integer num as input and returns 1 if it is an 
// Armstrong number, and 0 otherwise.

// An Armstrong number is a number that is equal to the 
// sum of cubes of its digits. For example, 371 is an 
// Armstrong number since 3_3_3 + 7_7_7 + 1_1_1 = 371.

// Here's the function signature:

// int is_armstrong(int num);


#include <stdio.h>
#include <math.h>
int armstrong(int num);
int c=0;
int main() {
    
    printf("no of digits = %s",armstrong(301)==1?"Armstrong no.":"not a armstrong");
    return 0;
}

int armstrong(int num)
{
    int arm=0,t=num;
    for(;t!=0;t/=10)
        c++;
    t=num;
    for(;t!=0;t/=10)
    {
        int k=t%10;
        arm+=(pow(k,c));
    }
    return arm==num?1:0;
}
