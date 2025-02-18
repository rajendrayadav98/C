// Write a c program that will insert the element in Sorted array

// Input:
// int arr[]={2,5,6,7,8}
// Element to Insert: 4
// Output:
// 2 4 5 6 7 8

#include <stdio.h>

int main() {
  int n;
  int ele;
  printf("Enter the size of the array");
  scanf("%d",&n);//5
  int a[n];// [ |  |  |  |  ]
  
  for(int i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  
  n=n+1;
  printf("Enter the element which you want to insert :");
  scanf("%d",&ele);
  
 a[n-1]=ele;
 
 for(int i=0;i<n;i++)
 {
     for(int j=i+1;j<n;j++)
     {
         if(a[i]>a[j])
         {
             int t=a[i];
             a[i]=a[j];
             a[j]=t;
         }
     }
 }
 for(int i=0;i<n;i++)
 {
     printf("%3d",a[i]);
 }
    return 0;
}