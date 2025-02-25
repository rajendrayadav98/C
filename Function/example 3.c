//  find sum of two numbers


#include <stdio.h>
int sum(int x,int y)
{
   return x+y; 
}
int main() {
    int num1,num2,result;
    printf("Enter first num:");
    scanf("%d",&num1);
    printf("Enter second num:");
    scanf("%d",&num2);
    result=sum(num1,num2);
    printf("Sum of two numbers:%d",result);
    return 0;
}
