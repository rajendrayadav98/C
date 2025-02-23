// Write a C program to read name and age of person and by age check the person is eligible for vote or not using simple (if) only.
// Sample input  : Enter your name: Kishor
//                 Enter your age: 20
// Sample output : Hi kishor you are eligible to vote.
// Sample input  : Enter your age: 16
// Sample output : Sorry Kishor you are not eligible to vote.

#include<stdio.h>
int main()
{
char name [100];
int age;
printf("enter the name and age");
scanf("%s %d",name,&age);
if(age>=20)
{
printf("Hi %s you are eligible for vote",name);
return 0;
}
printf("sorry %s you are not eligible  for vote",name);

return 0;
}