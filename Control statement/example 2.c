// Write a C program to find maximum between two numbers using simple (if) only.
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
printf("Max no=%d\n",a);
 return 0;   
}
if(a<b)
{
printf("Max no=%d\n",b);
 return 0;   
}
if(a==b)
{
printf("Both equal");
 return 0;   
}
return 0;
}