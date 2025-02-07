// Write a C program to sort a given array in ascending order. 
// The program should use the bubble sort algorithm to compare adjacent elements and swap them if they are in the wrong order.
// After sorting, the program should print the original array and the sorted array.

// Sample input : 
// Array: {64, 25, 12, 22, 11}

// Sample output :
// Original array: 64 25 12 22 11 

#include <stdio.h>

int main() {
   int arr[10]={64,25,12,22,11};
   int n=5;
   for(int i=0;i<=n-2;i++){
       for(int j=0;j<=n-i-2;j++)
       {
        if(arr[j]>arr[j+1])
        {
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        }
        }
        }
       for(int i=0;i<n;i++){
       printf("%d ",arr[i]);
       }
     
     return 0;
}