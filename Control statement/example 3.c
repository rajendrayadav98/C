// Write a C program to find maximum between two numbers using if-else.
// Sample input  : int a = 100, b = 200
// Sample output : 200

#include<stdio.h>
int main()
{
int a,b;
printf("enter the two number:");
scanf("%d%d",&a,&b);
if(a>b)
{
printf("max no:%d\n",a);
}
else
{
    printf("max no :%d",b);
}

return 0;
}