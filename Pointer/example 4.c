// Write a program in C to swap elements using call by reference.
// create int main() function.
// create void swap(int *a, int *b, int *c) function.
//  in main function read value for a,b,c and call the swap fuction by passing addresses of all three variable.
//  NOTE : print the result before swap and after swap in main funtion only and understand the use/power of pointer.

// Sample input : a = 5 , b = 6 , c = 7;

// Sample output :

// The value before swapping are :                                        
// a = 5                                                 
// b = 6                                                 
// c = 7                                                 
                                                    
// The value after swapping are :                                        
// a = 7                                                 
// b = 5                                                 
// c = 6 


#include <stdio.h>
void swap(int *a, int *b, int *c) {
    int temp = *a;  
    *a = *b;        
    *b = *c;      
    *c = temp;      
}
int main() {
  
  int a = 0, b = 0, c = 0;
  printf("Enter first Number : ");
  scanf("%d",&a);
   printf("Enter second Number : ");
  scanf("%d",&b);
   printf("Enter third Number : ");
  scanf("%d",&c);
  
  printf("Before swapping: \n");
    printf("a = %d\n b = %d\n c = %d \n",a,b,c);
  swap(&a,&b,&c);
  
  printf("After swapping : \n");
  printf("a = %d\n b = %d\n c = %d\n",a,b,c);
    return 0;
}